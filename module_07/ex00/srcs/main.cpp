/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:54:47 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/08 17:33:32 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <stdexcept>

int		main( void ){
	{
		std::cout << BLUE << BOLD << "-----INITIAL TESTS-----" << RESET << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//		return 0;
	}
	{
		std::cout << BLUE << BOLD << "-----MY OWN TESTS-----" << RESET << std::endl;
		int	a = 42;
		int b = 21;

		::operations(a, b);

		float c = 3.14f;
		float d = 42.42f;

		::operations(c, d);

		std::string e = "left";
		std::string f = "right";

		::operations(e, f);
		
		::operations(a, c);

		return (0);
	}
}
