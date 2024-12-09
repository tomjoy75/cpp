/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 13:25:22 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// int	main(int argc, char **argv){
// 	if ( argc < 2 ){
// 		std::cerr << RED << "Error: No arguments" << RESET << std::endl;
// 		return (1);
// 	}
// 	return( process(argv[1]));
// }

void	test( std::string const &input, std::string const &expected, int num){
	std::stringstream	os;
	
	std::cout << "\n__________TEST " << num << "__________" << std::endl;
	std::cout << "\texpression : \"" << input << "\"" << std::endl;
	std::cout << "\tresult : "; 
	os << process(input);
	std::cout << process(input) << std::endl;
	if (os.str() == expected){
		std::cout << GREEN << os.str() << " ---OK---" << std::endl;
	}
	else
		std::cout << RED << "wrong : " << os.str() << RESET << std::endl;
	(void)expected;
}

int main( void ){
	test("8 9 * 9 - 9 - 9 - 4 - 1 +", "42", 1);
	test("7 7 * 7 -", "42", 2);
	test("3 3 +", "6", 3);
}