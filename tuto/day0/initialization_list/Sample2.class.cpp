/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:10:31 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 14:38:01 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(int p1, char p2, float p3): a1(p1), a2(p2), a3(p3){

	std::cout << "Constructor launched" << std::endl;

	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
}

Sample2::~Sample2(void){
	std::cout << "Constructor destroyed" << std::endl;
	return;
}
