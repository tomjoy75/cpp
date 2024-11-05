/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/05 13:49:13 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iomanip>

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &){return *this;};

static bool	isChar(std::string const &str){
	if (str.empty())
		return (false);
	if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return (1);
	else
		return (0);
}

// Return 0 if not special, or 1 to 6 for ref in table(be careful 1..6, not 0..5)
static int	isSpecial(std::string const &str, std::string const spec[]){
	for (int i = 0; i < 6; i++){
		if (str == spec[i])
		       return (i + 1);	
	}
	return (0);
}

void	ScalarConverter::convert( std::string const &str){
	std::string	special[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	int		isSpec;
	bool	intOverflow = false;
	int		floatOverflow = 0;
	int		doubleOverflow = 0;
	std::string	toChar = "";
	int		toInt;
	float	toFloat;
	double	toDouble;
	
	isSpec = isSpecial(str, special);
	// In case of char
	if (isChar(str)){
		toInt =	static_cast<int>(str[0]);  	
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << toInt << std::endl;
		std::cout << "float: " << toInt << ".0f" << std::endl;
		std::cout << "double: " << toInt << ".0" << std::endl;
		return ;
	}
	// Change to int (if not char nor digit, toInt = 0) 
	toInt = std::atoi(str.c_str());
	// Preparation for overflw checking
	toDouble = std::atof(str.c_str());
	if (toDouble < std::numeric_limits<int>::min() || toDouble > std::numeric_limits<int>::max()){
		intOverflow = true;
	}
	if (toDouble < -std::numeric_limits<float>::max())
		floatOverflow = -1;
	if (toDouble > std::numeric_limits<float>::max())
		floatOverflow = 1;
	if (toDouble == -std::numeric_limits<double>::max())
		doubleOverflow = -1;
	if (toDouble == std::numeric_limits<double>::max())
		doubleOverflow = 1;
	// For floating numbers, check if there's an 'f' and cast accordingly
	if (str[str.size() - 1] == 'f'){
		toFloat = std::atof(str.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else { 
		toDouble = std::atof(str.c_str());	
		toFloat = static_cast<float>(toDouble);
	}
	if (isSpec)
		toChar = "impossible";
	else if (toInt >= ' ' && toInt <= '~'){
		toChar += "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else
		toChar = "Non displayable";
	std::cout << "char: " << toChar << std::endl;
	if (isSpec)
		std::cout << "int: impossible" << std::endl;
	else if (intOverflow)
		std::cout << "int: impossible (overflow)" << std::endl;
	else 
		std::cout << "int: " << toInt << std::endl;
	if (isSpec){
		if (str == "+inf" || str == "+inff"){
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
			return;
		}
	}
	if (floatOverflow == 1)
		std::cout << "float: " << std::fixed << std::setprecision(FLOATPRECISION) << "+inff" << std::endl;
	else if (floatOverflow == -1)
		std::cout << "float: " << std::fixed << std::setprecision(FLOATPRECISION) << "-inff" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(FLOATPRECISION) << toFloat << "f" << std::endl;
	
	if (doubleOverflow == 1)
		std::cout << "double: " << std::fixed << std::setprecision(FLOATPRECISION) << "+inf" << std::endl;
	else if (doubleOverflow == -1)
		std::cout << "double: " << std::fixed << std::setprecision(FLOATPRECISION) << "-inf" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(FLOATPRECISION) << toDouble << std::endl;
}

