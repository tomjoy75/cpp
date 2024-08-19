/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:24:33 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 12:30:10 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void){

	std::string	str1("Bonjour"), str2;
	std::cout << str1 << ", Quel est ton nom?" << std::endl;
	std::cin >> str2;
	str1 += " " + str2;
	std::cout << str1 << std::endl;

	return (0);
}
