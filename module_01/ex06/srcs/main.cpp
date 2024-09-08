/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:28:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/08 23:59:16 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){

	if (argc < 2){
		std::cout << RED << "invalid format" << std::endl;
		return (1);
	}
	Harl	instance;
	std::cout << GREEN << ITALIC << argv[1] << RESET << std::endl;
	instance.complain(argv[1]);
	return (0);
}
	
