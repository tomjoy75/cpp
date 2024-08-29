/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:25:25 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 16:06:22 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( int v): _foo(v){
	std::cout << "Constructor called" << std::endl;
	 return;
}

Sample::~Sample (void){
	std::cout << "Constructor destoyed" << std::endl;
	return;
}

int	Sample::getFoo( void ) const{
	return (this->_foo);
}

int	Sample::compare(Sample *other) const{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);

	return (0);
}

