/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class2.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 01:30:52 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/26 18:46:27 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1( char p1, int p2, float p3 ) {
	std::cout << "Constructor called" << std::endl;

	this->o1 = p1;
	this->o2 = p2;
	this->o3 = p3;
	
	std::cout << "this->o1: " << this->o1 << std::endl;
	std::cout << "this->o2: " << this->o2 << std::endl;
	std::cout << "this->o3: " << this->o3 << std::endl;


	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar( void ){
	std::cout << "Member function bar called" << std::endl;
	return;
}
