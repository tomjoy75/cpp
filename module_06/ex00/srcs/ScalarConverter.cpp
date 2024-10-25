/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/25 17:14:26 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

static bool	isChar(std::string const &str){
	if (str.size() == 1 && (str.at(0) >= ' ' && str.at(0) <= '~'))
		return (1);
	else
		return (0);
}

// TODO: if a conversion to char is not displayable, prints an informative message.
void	ScalarConverter::convert( std::string const &str){
	char	toChar;
	int		toInt;
//	float	toFloat;
//	double	toDouble;

	std::cout << "conversion : " << str << std::endl;
	toInt = std::atoi(str.c_str());
	std::cout << "int : " << toInt << std::endl;

	if (isChar(str)){
//		toChar = str[0];
		toChar = static_cast<char>(str[0]);
		std::cout << "char : " << toChar << std::endl;
	}
}

