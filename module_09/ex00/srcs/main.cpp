/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/03 17:10:09 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv){
	if ( argc < 1 ){
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return (1);
	}

	return (0);
}
