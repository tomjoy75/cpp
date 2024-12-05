/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:05:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/05 19:01:34 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


void	BitcoinExchange::append(std::string line){
	std::stringstream	ss(line);
	std::string			key;
	float				value;	
	
	std::getline(ss, key, ',');
	if ( key == "date" )
		return ;
	ss >> value;
//	std::cout << "TEST : key : " << key << " value : " << value << std::endl;
	this->_data.insert(std::pair<std::string, float>(key, value));
}

void	BitcoinExchange::showData( void ){
	for ( std::map<std::string, float>::const_iterator it = _data.begin(); it != _data.end(); it++ ){
		std::cout << "key : " << it->first << " --- value : " << it->second << std::endl;
	}	
}

bool	isLeapYear(int	year){
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 ));
}

// Function which calculate the days from 01/01/1970
long	BitcoinExchange::convertDate( std::string const date){
	long	nbDays = 0;
	std::stringstream	ss(date);
	int		year, month, day;
	
	ss >> year >> month >> day;
	for (int i = BASE_YEAR; i < year; i++){
		if (isLeapYear(i))
			nbDays += 366;
		else
			nbDays += 365;
	}
	return (nbDays);	
};
// ss >> year >> tiret >> month >> tiret >> day