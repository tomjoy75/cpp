/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:28:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/09 00:11:03 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){

	if (argc < 2){
		std::cout << RED << "invalid format" << std::endl;
		return (1);
	}
	Harl	instance;
	instance.complain(argv[1]);
	return (0);
}
	
