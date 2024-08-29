/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:58:49 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 17:08:21 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0( void )
{
	Sample	instance;
	std::cout << "number of instances during f0: " << Sample::getNbInst() << std::endl;

	return;
}

void	f1( void )
{
	Sample	instance;
	std::cout << "number of instances before f0: " << Sample::getNbInst() << std::endl;
	f0();
	std::cout << "number of instances after f0: " << Sample::getNbInst() << std::endl;

	return;
}

int	main( void )
{
	std::cout << "number of instances before f1: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "number of instances after f1: " << Sample::getNbInst() << std::endl;

	return (0);
}
