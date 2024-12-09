/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 14:48:04 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// MAIN DE BASE
int	main(int argc, char **argv){
	if ( argc < 2 ){
		std::cerr << RED << "Error: No arguments" << RESET << std::endl;
		return (1);
	}
	std::string	result;
	int			errCode = process(argv[1], result);
	if (errCode)
		std::cout << RED << result << RESET << std::endl;
	else
		std::cout << result << std::endl;
	return( errCode );
}

// MAIN DE TEST
// void	test( std::string const &input, std::string const &expected, int num){
// 	std::string			result;
	
// 	std::cout << BLUE << "\n__________TEST " << num << "__________" << RESET << std::endl;
// 	std::cout << "\texpression : \"" << input << "\"" << std::endl;
// 	process(input, result);
// 	std::cout << "\tresult : \"" << result << "\""; 
// 	if (result == expected){
// 		std::cout << GREEN << "\t---OK---" << RESET << std::endl;
// 	}
// 	else
// 		std::cout << RED << "\t---KO---" << RESET << ITALIC << "\n\t\tshould be : \"" << expected << "\"" << RESET << std::endl;
// }

// int main( void ){
// 	test("8 9 * 9 - 9 - 9 - 4 - 1 +", "42", 1);
// 	test("7 7 * 7 -", "42", 2);
// 	test("1 2 * 2 / 2 * 2 4 - +", "0", 3);
// 	test("(1 + 1)", "Error : Invalid character", 4);
// 	test("", "Error : Wrong expression", 5);
// 	test("4 5 6 *", "Error : Wrong expression", 6);
// 	test (" 10 5 5 - /", "Error : Division by zero", 7);
// 	test (" 5 + /", "Error : Wrong expression", 8);
// 	test("1 1 + 1 &", "Error : Invalid character", 9);

// 	return (0);
// }