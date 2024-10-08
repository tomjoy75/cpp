/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/08 17:17:31 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ):_name("noName"), _grade(10){
	std::cout << "Default Constructor" << std::endl;
}	

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Destructor" << std::endl;
}


