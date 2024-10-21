/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:04:21 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/21 01:30:43 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern( void ){
	_forms[0] = new PresidentialPardonForm();
	_forms[1] = new RobotomyRequestForm();
	_forms[2] = new ShrubberyCreationForm();
	std::cout << "Default Constructor (Intern)" << std::endl;
}

Intern::Intern( Intern const &src ){
	(void)src;
	_forms[0] = new PresidentialPardonForm();
	_forms[1] = new RobotomyRequestForm();
	_forms[2] = new ShrubberyCreationForm();
	std::cout << "Copy Constructor (Intern)" << std::endl;
}

Intern::~Intern( void ){
	delete _forms[0];
	delete _forms[1];
	delete _forms[2];
	std::cout << "Destructor (Intern)" << std::endl;	
}

Intern	&Intern::operator=(Intern const &rhs ){
	if (this != &rhs){
		*this = rhs;
		std::cout << "Operator overload = (Bureaucrat)" << std::endl;
	}
	return (*this);
}

const char	*Intern::FormNotFound::what() const throw(){
	return (RED"This name isn´t a valid form name"RESET);	
}
			
AForm	*Intern::makeForm(std::string name, std::string target) const{
	AForm	*form = NULL;
/*	switch (name){
		case "PresidentialPardon":
			AForm	*form = new PresidentialPardonForm();
			break;
		default:
			std::cout << "Incorrect name : " << name << std::endl;*/
	std::cout << target << std::endl;
	if (name == "presidential pardon")
		form = new PresidentialPardonForm();
	if (name == "robotomy request")
		form = new RobotomyRequestForm();
	else 
		throw FormNotFound();

	return (form);
}
