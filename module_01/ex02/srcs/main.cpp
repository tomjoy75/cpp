/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:37:48 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/02 10:49:58 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void){

	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adress of str : " << &str << std::endl << "value of str : " << str << std::endl << std::endl;
	std::cout << "adress in stringPTR : " << stringPTR << std::endl << "value pointed by stringPTR : " << *stringPTR << std::endl << std::endl;
	std::cout << "adress in stringREF : " << &stringREF << std::endl << "value pointed by stringREF : " << stringREF << std::endl << std::endl;

	return (0);
}
