/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:14:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/26 16:14:54 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << BLUE << "Initial test" << RESET << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "longest : " << sp.longestSpan() << std::endl;

	std::cout << BLUE << "Try to add an value when container is full" << RESET << std::endl;
	try{
		sp.addNumber(42);
	}
	catch (std::overflow_error &e){
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE << "Create a new container with N = 10000" << RESET << std::endl;
	Span sp2 = Span(10000);
	sp2.addNumber(42);
	std::cout << BLUE << "Try to access function when there is only 1 var" << RESET << std::endl;
	Span::showActualSize( sp2.getData() );
	try{
		sp2.longestSpan();
	}
	catch (std::logic_error &e){
		std::cerr << "longest : " << RED << e.what() << RESET << std::endl;
	}
	try{
		sp2.shortestSpan();
	}
	catch (std::logic_error &e){
		std::cout << "shortest : " << RED << e.what() << RESET << std::endl;
	}
	std::cout << BLUE << "Fill the container with random values and launch functions" << RESET << std::endl;
	sp2.fillRandNumbers();
	std::cout << "shortest : " << sp2.shortestSpan() << std::endl;
	std::cout << "longest : " << sp2.longestSpan() << std::endl;

	return 0;
}
