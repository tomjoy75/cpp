/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:05:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/04 15:15:33 by tjoyeux          ###   ########.fr       */
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
// ss >> year >> tiret >> month >> tiret >> day