/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:56:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/05 17:14:48 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void ){

	Data	*data1 = new Data("Thomas");
	Data	*data2 = NULL;
	uintptr_t	adr;
	uintptr_t	wrong_adr; 

	std::cout << "adress of data1 : " << data1 << std::endl;
	std::cout << "name of data1 : " << data1->get_name() << std::endl;
	std::cout << GREEN << "data1 >> address" << RESET << std::endl;
	adr = Serializer::serialize(data1);
	std::cout << "address of data1 : " << adr << std::endl;
	std::cout << GREEN << "address >> data1" << RESET << std::endl;
	std::cout << "adress of data1 after recuperation : " << Serializer::deserialize(adr) << std::endl;
	std::cout << "name of data1 after recuperation : " << Serializer::deserialize(adr)->get_name() << std::endl;
	std::cout << std::endl;	
	std::cout << "adress of data2 : " << data2 << std::endl;
	std::cout << GREEN << "data2 >> address" << RESET << std::endl;
	wrong_adr = Serializer::serialize(data2);
	std::cout << "address of data2 : " << wrong_adr << std::endl;
	std::cout << GREEN << "address >> data2" << RESET << std::endl;
	std::cout << "adress of data2 after recuperation : " << Serializer::deserialize(wrong_adr) << std::endl;
	
	delete (data1);
	return (0);
}
