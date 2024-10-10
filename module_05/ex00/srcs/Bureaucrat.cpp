/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/10 16:44:48 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ):_name("noName"), _grade(10){
	std::cout << "Default Constructor" << std::endl;
}	

Bureaucrat::Bureaucrat( Bureaucrat const &src ){
	this->_name = src._name;
	this->_grade = src._grade;
	std::cout << "Copy constructor";
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Destructor" << std::endl;
}

Bureaucrat::Bureaucrat	&operator=( Bureaucrat const &rhs ){
	if (this == &rhs)
	   std::cout << "same memory adress ... no copy!" << std::endl;	
	else {
		this->_name = rhs._name;
		this->_grade = rhs._grade;
		std::cout << "Operator overload =" << std::endl;
	}
	return (*this);
}

std::string	&Bureaucrat::getName( void ){
	return (this->_name);
}
int			Bureaucrat::getGrade( void ){
	return (this->_grade);
}

void		Bureaucrat::incGrade( void ){
	this->_grade++;
}
void		Bureaucrat::decGrade( void ){
	this->_grade--;

}

