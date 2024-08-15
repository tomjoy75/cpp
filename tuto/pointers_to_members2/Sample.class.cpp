/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:56:42 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 11:14:46 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ): foo( 0 ){

	std::cout << "Constructor launched" << std::endl;
	return;
}	

Sample::~Sample( void ){

	std::cout << "Destructor launched" << std::endl;
	return;
}

void	Sample::bar( void ) const{

	std::cout << "function member launched" << std::endl;
	return;
}
