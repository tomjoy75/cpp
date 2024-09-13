/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:55:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/13 16:03:32 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	compare(std::string const &operation, bool const result, bool const expected){
	std::cout << "\tFOR \"" << operation << "\" : " << result << " ----- ";
	if (result == expected) 
		std::cout << GREEN << ITALIC << "GOOD!" << RESET << std::endl;
	else
		std::cout << RED << ITALIC << "BAD!" << RESET << std::endl;
}

void	compare(std::string const &operation, int const result, int const expected){
	std::cout << "\tFOR \"" << operation << "\" : " << result << " ----- ";
	if (result == expected) 
		std::cout << GREEN << ITALIC << "GOOD!" << RESET << std::endl;
	else
		std::cout << RED << ITALIC << "BAD!" << RESET << std::endl;
}

int main( void ) {
	
	std::cout << BLUE << BOLD << "-----INITIAL TEST-----" << RESET << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

//	std::cout << Fixed::max( a, b ) << std::endl;
//
// EN PLUS
	
	a.setRawBits(4242);
//	b.setRawBits(13);
	std::cout << std::endl << BLUE << BOLD << "-----MORE TEST-----" << RESET << std::endl;
	std::cout << "left and right objects with floating static value : " << a.getRawBits() << " and " << b.getRawBits() << std::endl;
	std::cout << GREEN << ITALIC << "\tCOMPARISON OPERATORS OVERLOAD" << RESET << std::endl;

	compare(">", a > b, a.getRawBits() > b.getRawBits());
	compare("<", a < b, a.getRawBits() < b.getRawBits());
	compare(">=", a >= b, a.getRawBits() >= b.getRawBits());
	compare("<=", a <= b, a.getRawBits() <= b.getRawBits());
	compare("==", a == b, a.getRawBits() == b.getRawBits());
	compare("!=", a != b, a.getRawBits() != b.getRawBits());
	std::cout << GREEN << ITALIC << "\tARITHMETIC OPERATORS OVERLOAD" << RESET << std::endl;

	compare("+", (a + b).getRawBits(), a.getRawBits() + b.getRawBits());
	compare("-", (a - b).getRawBits(), a.getRawBits() - b.getRawBits());
	compare("*", (a * b).getRawBits(), roundf(a.getRawBits() * b.getRawBits() / (float)(1 << BITS)));
	compare("/", (a / b).getRawBits(), round((float)a.getRawBits() / b.getRawBits() * (1 << BITS)));
	compare("/ (by zero)", (a / 0).getRawBits(), round((float)a.getRawBits() / 0 * (1 << BITS)));
	std::cout << GREEN << ITALIC << "\tINCREMENT OPERATORS OVERLOAD" << RESET << std::endl;

	Fixed	aCopy(a);	
	compare("++ (prefix)", (++a).getRawBits(), aCopy.getRawBits() + 1); 
	compare("++ (postfix)", (a++).getRawBits(), aCopy.getRawBits() + 1); 
	compare(" after postfix", a.getRawBits(), aCopy.getRawBits() + 2); 
	compare("-- (prefix)", (--a).getRawBits(), aCopy.getRawBits() + 1); 
	compare("-- (postfix)", (a--).getRawBits(), aCopy.getRawBits() + 1); 
	compare(" after postfix", a.getRawBits(), aCopy.getRawBits()); 
	return 0;
}
