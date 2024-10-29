/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/29 14:07:27 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <sstream>
/*
static void	identify(std::string const &str){
	std::stringstream	ss(str);
	int				i;
	float			f;
	char			c;

//	str >> ss;
	ss >> i;
	if (ss.fail())
		std::cout << str << " don't have int" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	ss.clear();
	ss.str(str);
	
	ss >> c;
	if (ss.fail())
		std::cout << str << " don't have char" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
	ss.clear();
	ss.str(str);

	ss >> f;
	if (ss.fail())
		std::cout << str << " don't have float" << std::endl;
	else
		std::cout << "float : " << f << std::endl;
//	ss >> i;
//	std::cout << "int : " << i << std::endl;
}*/
static bool isInt(std::string const &str){
	size_t	i = 0;
	std::stringstream	ss(str);
	int					j;

	if (str.empty())
		return (false);
	if (str[0] == '+' || str[0] == '-'){
		if (str.size() == 1)
			return (false);
		i++;
	}
	for (; i < str.size(); i++){
		if (!isdigit(str[i]))
			return (false);
	}
	ss >> j;
	if (ss.fail())
		return (false);
	return true;
}

static bool	isChar(std::string const &str){
	if (str.size() == 1 && (str.at(0) >= ' ' && str.at(0) <= '~'))
		return (1);
	else
		return (0);
}

static bool isFloat(std::string const &str){
	std::stringstream	ss(str);
	float				f;	

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
//	std::cout << str.size() << std::endl;
//	std::cout << str[str.size() - 1] << std::endl;
	if (str.at(str.size() - 1) != 'f')
		return (false);
	ss >> f;
	if (ss.fail())
		return (false);
	return (true);
	
}

static bool isDouble(std::string const &str){
	std::stringstream	ss(str);
	double				d;	

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	ss >> d;
	if (ss.fail())
		return (false);
	return (true);
}

// TODO: if a conversion to char is not displayable, prints an informative message.
void	ScalarConverter::convert( std::string const &str){
	char	toChar;
//	int		toInt;
//	float	toFloat;
//	double	toDouble;

	std::cout << "conversion : " << str << std::endl;
//	identify(str);
//	toInt = std::atoi(str.c_str());
//	std::cout << "int : " << toInt << std::endl;
	if (isInt(str))
		std::cout << "Valid int" << std::endl;
	else
		std::cout << "Wrong int" << std::endl;

	if (isChar(str))
		std::cout << "Valid char" << std::endl;
	else
		std::cout << "Wrong char" << std::endl;

	if (isFloat(str))
		std::cout << "Valid float" << std::endl;
	else
		std::cout << "Wrong float" << std::endl;

	if (isDouble(str))
		std::cout << "Valid double" << std::endl;
	else
		std::cout << "Wrong double" << std::endl;

	if (isChar(str)){
//		toChar = str[0];
		toChar = static_cast<char>(str[0]);
		std::cout << "char : " << toChar << std::endl;
	}
}

