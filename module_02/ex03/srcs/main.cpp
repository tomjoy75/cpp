/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:55:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/18 12:26:49 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

void	compare(std::string const &operation, bool const result, bool const expected){
	std::cout << "\tFOR \"" << operation << "\" : " << std::boolalpha << result << " ----- ";
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
int	main (void){

	Point	a(0, 0);
	Point	b(4, 0);
	Point	c(2, 3);
	Point	pInt(2, 1), pExt(5, 1), pEdge(2, 0);

	std::cout << std::endl << BLUE << BOLD << "-----TRIANGLE COORD-----" << RESET << std::endl;
	std::cout << "\tPoint 1 : (" << a.getXf() << ", " << a.getYf() << ")" << std::endl;
	std::cout << "\tPoint 2 : (" << b.getXf() << ", " << b.getYf() << ")" << std::endl;
	std::cout << "\tPoint 3 : (" << c.getXf() << ", " << c.getYf() << ")" << std::endl << std::endl;
	std::cout << std::endl << BLUE << BOLD << "-----TEST POINTS-----" << RESET << std::endl;
	compare("Point in triangle (" + pInt.getXf() + ")", bsp(a, b, c, pInt), true); 
	compare("Point not in triangle", bsp(a, b, c, pExt), false); 
	compare("Point on edge", bsp(a, b, c, pEdge), false); 
	compare("Point on vertex", bsp(a, b, c, c), false); 
}
