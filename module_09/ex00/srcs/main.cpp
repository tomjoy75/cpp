/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/04 16:55:27 by tjoyeux          ###   ########.fr       */
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
//	data.showData();
	ifs.open(argv[1], std::ifstream::in);
	if (ifs.fail() || !ifs.is_open()){
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return (1);
	}
	while ( std::getline(ifs, line) ){
		std::stringstream	ss(line);
		std::string			date;
	//	std::cout << line << std::endl;
	//	if ()

		std.getline(ss, date, '|' );
	}
	
	ifs.close();
	return (0);
}
