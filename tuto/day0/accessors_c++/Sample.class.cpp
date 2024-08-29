/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:48:37 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 15:07:52 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){
	std::cout << "Constructor launched" << std::endl;
	this->setBar( 0 );
	std::cout << "foo = " << this->getBar() << std::endl;

	return;
}

Sample::~Sample( void ){
	std::cout << "Constructor destroyed" << std::endl;

	return;
}

void	Sample::setBar(int foo){

	if (foo > 0)
		this->_bar = foo;

	return;
}

int		Sample::getBar( void ) const{

	return(this->_bar);
}
