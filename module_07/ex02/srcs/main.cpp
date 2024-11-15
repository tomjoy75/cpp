/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:18:05 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/11 18:53:47 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ){

	Array<int>	*empty = new Array<int>();
	Array<int>	*param = new Array<int>(5);
	int	i = 0;
//	std::string * a = new std::string();
//	std::cout << *a << std::endl;
//	std::string * b = new std::string[2]();
//	std::cout << b[1] << std::endl;
	std::cout << "size : " << empty->size() << std::endl;
	empty->display();
	std::cout << "size : " << param->size() << std::endl;
	param->display();
	for (; i < 5 ; i++)
		std::cout << "elem " << i + 1 << " : " << param->_tab[i] << std::endl;	
	i++;
	try{
		std::cout << "elem " << i + 1 << " : " << param->_tab[i] << std::endl;	
	}
	catch (std::out_of_range e){
		std::cout << e.what() << std::endl;
	}
	delete (empty);
	delete (param);
	return ( 0 );
}
