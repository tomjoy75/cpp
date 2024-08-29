/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:39:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 15:57:43 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const t): pi(t), qd(42){
	std::cout << "Constructor enabled" << std::endl;
	return;
}

Sample::~Sample( void ){
	std::cout << "Constructor disabled" << std::endl;
	return;
}

void	Sample::bar( void ) const{
	std::cout << "this::pi = " << this->pi << std::endl;
	std::cout << "this::qd = " << this->qd << std::endl;
	return;
}
