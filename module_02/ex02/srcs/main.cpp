/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:55:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/12 16:59:39 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
/*	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
*/
	std::cout << b << std::endl;

//	std::cout << Fixed::max( a, b ) << std::endl;
//
// EN PLUS
	if (b != a)
		std::cout << "GOOD!" << std::endl;
	else
		std::cout << "BAD!" << std::endl;

	return 0;
}
