/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_old.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:18:05 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/12 14:45:19 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/*
int	main( void ){

	std::cout << BLUE << BOLD << "-----TESTS-----" << RESET << std::endl;
	std::cout << BLUE << "\tDefault Constructor(empty)" << RESET << std::endl;
	Array<int>	*empty = new Array<int>();
	std::cout << "size : " << empty->size() << std::endl;
	empty->display();
	delete (empty);
	
	std::cout << BLUE << "\tParametric Constructor(int)" << RESET << std::endl;
	Array<int>	*param = new Array<int>(5);
	std::cout << "size : " << param->size() << std::endl;
	param->display();
	try{
		std::cout << "element " << 42 << ": " << param->getElem(41) << std::endl;	
	}
	catch (std::out_of_range e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << "\tCopy Constructor(int)" << RESET << std::endl;
	Array<int>	paramCopy(*param);
	paramCopy.display();	
	std::cout << BLUE << "\tChange value of the copy" << RESET << std::endl;
	paramCopy.setNewTab(42);
	paramCopy.display();	
	std::cout << BLUE << "\tDisplay value of the original(he shouldn't change)" << RESET << std::endl;
	param->display();	
	std::cout << BLUE << "\tOperator overload = (should come back to initial value)" << RESET << std::endl;
	paramCopy = *param;
	paramCopy.display();
	delete (param);
//	delete (paramCopy);
	std::cout << BLUE << "\tParametric Constructor(string)" << RESET << std::endl;
	Array<std::string>	*strArray = new Array<std::string>(4);
	std::cout << "size : " << strArray->size() << std::endl;
	strArray->display();
	delete (strArray);
	return ( 0 );
}*/
