/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:52:36 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 16:58:25 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){

	std::cout << "Constructor called" << std::endl;
	Sample::nbInst++;

	return;
}

Sample::~Sample( void ){

	std::cout << "Constructor destroyed" << std::endl;
	Sample::nbInst--;

	return;
}

int	Sample::getNbInst( void ){

	return Sample::nbInst;
}

int	Sample::nbInst = 0;
