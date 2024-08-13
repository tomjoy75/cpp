/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:36:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 17:50:35 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ): foo(0){

	std::cout << "Constructor called" << std::endl;

	return;
}

Sample::~Sample( void ){

	std::cout << "Comstructor destroyed" << std::endl;

	return;
}

void	Sample::bar( void ) const{

	std::cout << "function bar launched" << std::endl;

	return;
}
