/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:02:11 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 11:11:32 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){
	
	std::cout << "Constructor ennabled" << std::endl;
	return;
}

Sample::~Sample( void ){
	
	std::cout << "constructor destroyed" << std::endl;
	return;
}
