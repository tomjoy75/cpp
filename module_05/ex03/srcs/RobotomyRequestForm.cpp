/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:34:37 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/21 16:34:13 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"	 
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm( void ):AForm("robotomy request", 72, 45), _target("noTarget"){
	std::cout << "Default Constructor (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ):AForm("robotomy request", 72, 45), _target(target){
	std::cout << "Parametric Constructor (RobotomyRequestForm) with target " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src):AForm(src), _target(src._target){
	std::cout << "Copy constructor (RobotomyRequestForm) with target " << this->_target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){//TODO
	std::cout << "Destructor (RobotomyRequestForm) with target " << this->_target << std::endl;

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){//TODO
	if (this == &rhs)
		std::cout << "same memory adress ... no copy!" << std::endl;
	else{
		this->_signed = rhs._signed;
		this->_target = rhs._target;
		std::cout << "Operator overload = (AForm)" << std::endl;	
	}
	return (*this);
}
	
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!this->getSigned())
		throw (FormNotSigned());
	if (executor.getGrade() > this->getGradeExec())
		throw (GradeTooLowException(RED + executor.getName() + " couldn't execute " + this->getName() + " because his grade is too low" + RESET)); 
	std::srand(std::time(0));
	if (std::rand() % 2){
		std::cout << BOLD <<"Bzzzzzzzzzzzzzz...." << RESET << std::endl;
		std::cout << GREEN << this->getTarget() << " has been robotomized successfully" << RESET << std::endl;
	}	
	else
		std::cout << RED << "The robotomy of " << this->getTarget() << " has failed" << RESET << std::endl;
}

std::string	const &RobotomyRequestForm::getTarget( void ) const{
	return (this->_target);
}

void	RobotomyRequestForm::setTarget(std::string const &target){
	this->_target = target;
}