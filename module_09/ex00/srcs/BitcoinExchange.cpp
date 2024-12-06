/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:05:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/06 16:08:21 by tjoyeux          ###   ########.fr       */
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
	int		validDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char	sep1, sep2;
	
	ss >> year >> sep1 >> month >> sep2 >> day;
	for (int i = BASE_YEAR; i < year; i++){
		if (isLeapYear(i))
			nbDays += 366;
		else
			nbDays += 365;
	}
	if (isLeapYear(year))
		validDays[1]++;
	for ( int i = month - 1; i > 0; i--){
		nbDays += validDays[i - 1];
	}
	nbDays += day - 1;
	return (nbDays);	
};

std::map<std::string, float>::iterator BitcoinExchange::begin( void ) { return(this->_data.begin());};

std::map<std::string, float>::iterator BitcoinExchange::end( void ) {return( this->_data.end());};

std::string	const	BitcoinExchange::findCorrectDate( std::string const date) const {
	std::map<std::string, float>::const_iterator	it;
	it = _data.lower_bound(date);
	if (date != it->first)
		it--;
	return( it->first );
}

float		BitcoinExchange::findCorrectValue( std::string const date) const {
	std::map<std::string, float>::const_iterator	it;
	it = _data.lower_bound(date);
	if (date != it->first)
		it--;
	return( it->second );
}
// 	return( this->_data.end());
// }
// ss >> year >> tiret >> month >> tiret >> day