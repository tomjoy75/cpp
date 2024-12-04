/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/04 15:05:36 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv){
	if ( argc < 2 ){
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return (1);
	}
	(void)argv;
	std::ifstream	ifs;
	std::string		line;
	BitcoinExchange	data;
//	std::string		date;
//	float			value;
	
	ifs.open(DB, std::ifstream::in);
	if (ifs.fail()){
		std::cerr << RED << "Error: could not open database." << RESET << std::endl;
		return (1);
	}
	while ( std::getline(ifs, line) ){
//		std::stringstream	parse( line );
//		parse >> date >> "," >> value;
		data.append(line);
	}
	ifs.close();
	data.showData();
	return (0);
}
