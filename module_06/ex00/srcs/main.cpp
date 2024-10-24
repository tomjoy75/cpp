/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:56:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/24 16:32:26 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv){
	if (argc < 2){
		std::cout << "Not enough argument" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return(0);
}
