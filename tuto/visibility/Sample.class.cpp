/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:26:59 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 17:28:25 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){

	std::cout << "Constructor created" << std::endl;

	this->publicFoo = 42;
	this->_privateFoo = 0;
	std::cout << "this->publicFoo " << this->publicFoo << std::endl;
	std::cout << "this->privateFoo " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
	
	return;
}

Sample::~Sample( void ){

	std::cout << "Constructor destroyed" << std::endl;

	return;
}

void	Sample::publicBar(void) const{
	
	std::cout << "function publicFoo launched" << std::endl;
	return;
}

void	Sample::_privateBar(void) const{

	std::cout << "function privateFoo launched" << std::endl;
	return;
}

