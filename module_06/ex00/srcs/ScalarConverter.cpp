/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/04 00:01:18 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
//#include <cctype>
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
	if (str.empty())
		return (false);
	if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return (1);
	else
		return (0);
}

static bool isFloat(std::string const &str){
	std::stringstream	ss(str);
	float				f;	
	size_t				i = 0;

	if (str.empty())
		return (false);
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str.at(str.size() - 1) != 'f')
		return (false);
	if (str[0] == '+' || str[0] == '-'){
		if (str.size() == 1)
			return (false);
		i++;
	}
	while (str[i] != '.' && i < str.size() - 1){
		if (!isdigit(str[i]))
		   return (false);
		i++;
	}	
	if (str[i] == '.')
		i++;
	while (i < str.size() - 1){
		if (!isdigit(str[i]))
		   return (false);
		i++;
	}	
	if (str[i] != 'f')
		return (false);
	ss >> f;
	if (ss.fail()){
		std::cout << "TEST: ss.fail" << std::endl;
		return (false);
	}
//Check of overflow
	if (f == std::numeric_limits<float>::max() && str != "3.40282e+38f")
		return (false);
//	std::cout << "TEST float de sortie : " << f << std::endl;
	return (true);
}

static bool isDouble(std::string const &str){
	std::stringstream	ss(str);
	double				d;	
	size_t				i = 0;

	if (str.empty())
		return (false);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (str[0] == '+' || str[0] == '-'){
		if (str.size() == 1)
			return (false);
		i++;
	}
	while (str[i] != '.' && i < str.size()){
		if (!isdigit(str[i]))
		   return (false);
		i++;
	}	
	if (str[i] == '.')
		i++;
	while (i < str.size()){
		if (!isdigit(str[i]))
		   return (false);
		i++;
	}	
	ss >> d;
	if (ss.fail())
		return (false);
//Check of overflow
	if (d == std::numeric_limits<double>::max() && str != "1.79769e+308")
		return (false);
	return (true);
}

// Return 0 if not special, or 1 to 6 for ref in table(be careful 1..6, not 0..5)
static int	isSpecial(std::string const &str, std::string const spec[]){
	for (int i = 0; i < 6; i++){
		if (str == spec[i])
		       return (i + 1);	
	}
	return (0);
}
/*
// TODO: if a conversion to char is not displayable, prints an informative message.
void	ScalarConverter::convert( std::string const &str){
	char	toChar;
	int		toInt;
	float	toFloat;
	double	toDouble;
	std::stringstream	ss(str);
	std::ostringstream	msg;

	std::cout << "conversion : " << str << std::endl;
//	identify(str);
//	toInt = std::atoi(str.c_str());
//	std::cout << "int : " << toInt << std::endl;
	msg << "char: ";	
	if (isInt(str)){
		ss >> toInt;
		if (toInt >= ' ' && toInt <= '~'){
			toChar = toInt;
			msg << toChar;
		}
		else
			msg << "Non displayable";
		msg << std::endl;

//		toInt = static_cast<int>(str);
//		std::cout << "int : " << toInt << std::endl;
	}
	else if (isChar(str)){
		toChar = static_cast<char>(str[0]);
		std::cout << "char : " << toChar << std::endl;
	}
	else if (isFloat(str)){
		ss >> toFloat;
//		toFloat = static_cast<float>(str);
		std::cout << "float : " << toFloat << std::endl;
	}
	else if (isDouble(str)){
		ss >> toDouble;
//		toDouble = static_cast<double>(str[0]);
		std::cout << "double : " << toDouble << std::endl;
	}
//	else //TODO : In case there 's no good cases
	msg << std::endl;
	std::cout << msg.str();
	
}
*/

void	ScalarConverter::convert( std::string const &str){
	std::string	special[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	int		isSpec;
	std::string	toChar = "";
	int		toInt;
//	float		toFloat;
//	double		toDouble;
	
	isSpec = isSpecial(str, special);
/*	if (isSpec)
		std::cout << "Special char : " << special[isSpec - 1] << std::endl;
	else if (isChar(str))
		std::cout << "Valid Char : " << str << std::endl;
	else
		std::cout << "not special" << std::endl;*/
	if (isChar(str)){
//		toChar = str[0];
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
		return ;
	}
	toInt = std::atoi(str.c_str());
	std::cout << "int: " << toInt << std::endl;
	if (str[str.size() - 1] == 'f')
		std::cout << "float: " << str << std::endl;

}

