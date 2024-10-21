/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:34:37 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/18 00:32:24 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"	 

PresidentialPardonForm::PresidentialPardonForm( void ):AForm("PresidentialPardonForm", 25, 5), _target("noTarget"){
	std::cout << "Default Constructor (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "Parametric Constructor (PresidentialPardonForm) with target " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src):AForm(src), _target(src._target){
	std::cout << "Copy constructor (PresidentialPardonForm) with target " << this->_target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){//TODO
	std::cout << "Destructor (PresidentialPardonForm) with target " << this->_target << std::endl;

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){//TODO
	if (this == &rhs)
		std::cout << "same memory adress ... no copy!" << std::endl;
	else{
//		this->_name = rhs._name; //TODO: Fout il essayer de copier les variables const?
		this->_signed = rhs._signed;
//		this->_grSign = rhs._grSign;
//		this->_grExec = rhs._grExec;
		this->_target = rhs._target;
		std::cout << "Operator overload = (AForm)" << std::endl;	
	}
	return (*this);
}
	
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{//TODO check the authorisations
	//std::cout << executor << std::endl;
	//TODO : The form is signed? Grade of executor enough to execute?
	if (!this->getSigned())
		throw (FormNotSigned());
	if (executor.getGrade() > this->getGradeExec())
		throw (GradeTooLowException(RED + executor.getName() + " couldn't execute " + this->getName() + " because his grade is too low" + RESET)); 
	std::cout << GREEN << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
//	std::cout << GREEN << this->getName() << " has been executed by " << executor.getName() << " for " << this->getTarget() << RESET << std::endl;
}

std::string	const &PresidentialPardonForm::getTarget( void ) const{
	return (this->_target);
}
