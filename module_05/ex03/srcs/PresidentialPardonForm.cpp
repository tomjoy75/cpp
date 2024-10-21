/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:34:37 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/21 16:18:30 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"	 

PresidentialPardonForm::PresidentialPardonForm( void ):AForm("presidential pardon", 25, 5), _target("noTarget"){
	std::cout << "Default Constructor (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):AForm("presidential pardon", 25, 5), _target(target){
	std::cout << "Parametric Constructor (PresidentialPardonForm) with target " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src):AForm(src), _target(src._target){
	std::cout << "Copy constructor (PresidentialPardonForm) with target " << this->_target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "Destructor (PresidentialPardonForm) with target " << this->_target << std::endl;

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	if (this == &rhs)
		std::cout << "same memory adress ... no copy!" << std::endl;
	else{
		this->_signed = rhs._signed;
		this->_target = rhs._target;
		std::cout << "Operator overload = (AForm)" << std::endl;	
	}
	return (*this);
}
	
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!this->getSigned())
		throw (FormNotSigned());
	if (executor.getGrade() > this->getGradeExec())
		throw (GradeTooLowException(RED + executor.getName() + " couldn't execute " + this->getName() + " because his grade is too low" + RESET)); 
	std::cout << GREEN << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}

std::string	const &PresidentialPardonForm::getTarget( void ) const{
	return (this->_target);
}

void	PresidentialPardonForm::setTarget(std::string const &target){
	this->_target = target;
}