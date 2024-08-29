/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:09:07 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 12:14:58 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){
	std::cout << "Constructor enabled" << std::endl;
	return;
}

Sample::~Sample( void ){
	std::cout << "Constructor destroyed" << std::endl;
	return;
}

void Sample::bar( void ){
	std::cout << "function bar launched" << std::endl;
	return;
}
