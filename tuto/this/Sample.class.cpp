/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:41:07 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 12:53:25 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){

	std::cout << "Constructor called" << std::endl;
	this->foo = 42;
	std::cout << "this.foo = " << this->foo << std::endl;
	this->bar();
	return;
}

Sample::~Sample( void ){

	std::cout << "Constructor destroyed" << std::endl;
	return;
}

void	Sample::bar( void ){
	std::cout << "function bar launched" << std::endl;
	return;
}
