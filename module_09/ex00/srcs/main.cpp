/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/05 18:10:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	validDate(std::string date){
	std::stringstream	ss(date);
	int					year;
	int					month;
	int					day;
	char				sep1;
	char				sep2;
	int					validDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int					leapYear = 0;
	
	if (date.size() != 10 || date[4] != '-' || date[7] !='-')
		return false;
	ss >> year >> sep1 >> month >> sep2 >> day;
	if ( ss.fail() || !ss.eof() )
		return false;
	// std::cout << "\t year = " << year << std::endl;
	// std::cout << "\t month = " << month << std::endl;
	// std::cout << "\t day = " << day << std::endl;
	// std::cout << "\t sep1 = " << sep1 << std::endl;
	// std::cout << "\t sep2 = " << sep2 << std::endl;
	if (sep1 != '-' || sep2 != '-')
		return false;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 ))
		leapYear = 1;
	// std::cout << "\t leap = " << leapYear << std::endl;
	if (month < 1 || month > 12)
		return false;
	if (leapYear && month == 2){
		if (day < 1 || day > 29)
			return false;
	}
	else if (day < 1 || day > validDays[month - 1])
		return false;
	return true;	
}

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
		std::string			key;
		char				sep;
		float				value;
		size_t				pos;
	//	std::cout << line << std::endl;
	//	if ()

	//	std.getline(ss, date, '|' );
		if ((pos = line.find('|')) == std::string::npos){
			std::cerr << RED << "Error: bad input => " << line.c_str() << RESET << std::endl;
			continue;
		}
		ss >> key >> sep >> value;  
		if (key == "date")
			continue;
		if (value > 1000){
			std::cerr << RED << "Error: too large a number." << RESET << std::endl;
			continue;
		}
		if (value < 0){
			std::cerr << RED << "Error: not a positive number." << RESET << std::endl;
			continue;
		}
		if (!validDate(key)){
			std::cerr << RED << "Error: not a valid date." << RESET << std::endl;
			continue;
		}

		std::cout << "date : '" << key << "'...sep : '" << sep << "' flux restant : '" << ss.str() << "'...amount : '" << value << "'" << std::endl;
	}
	
	ifs.close();
	return (0);
}
