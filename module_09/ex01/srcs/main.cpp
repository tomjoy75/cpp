/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 00:46:54 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool	isDigit(char c){
	return (c >= '0' && c <= '9');
}

static bool	isWhitespace(char c){
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	main(int argc, char **argv){
	if ( argc < 2 ){
		std::cerr << RED << "Error: No arguments" << RESET << std::endl;
		return (1);
	}
	std::string	str = argv[1];
	RPN		digits;
	
	for ( std::string::iterator it = str.begin(); it != str.end(); it++ ){
		if ( isDigit(*it) ){
			digits.push( *it - 48 );
		}
		else if ( isWhitespace(*it)){
			continue;
		}
		else {
			try {
				digits.operation(*it);
			}
			catch(std::invalid_argument &e){
				std::cerr << RED << e.what() << RESET << std::endl;
				return (1);
			}
			catch(std::logic_error &e){
				std::cerr << RED << e.what() << RESET << std::endl;
				return (1);
			}
			
		}
		//	std::cout << "Number : " << *it << std::endl;
	}
	if ( digits.size() == 1 ){
		digits.showStack();
		return (0);
	}
	else 
		std::cerr << RED << "Error : Wrong expression" << RESET << std::endl;
	return (1);
}
