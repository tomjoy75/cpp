/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuto_yt.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:32:29 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 15:52:38 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void ){
	std::string mot1 = "Bonjour ";
	std::string mot2("Hello");
	std::string mot3(100, '-');
	std::cout << mot3 << std::endl;
	std::string result = mot1 + mot2;
	std::cout << result << std::endl;
	mot1.append(mot2);
	std::cout << mot1 << std::endl;
	std::string mot4 = mot1.substr(0, 7);
	std::cout << mot4 << std::endl;

}
