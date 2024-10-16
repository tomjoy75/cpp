/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:09:42 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/16 15:43:45 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm( void ):_name("no_name"), _signed(false), _grSign(150), _grExec(150){
	std::cout << "Default Constructor (AForm)" << std::endl;
}

AForm::AForm( std::string name, int grSign, int grExec): _name(name), _signed(false), _grSign(grSign), _grExec(grExec){
	if (grSign > 150 || grExec > 150)
		throw (GradeTooLowException(RED"The lowest grade for the form possible is 150!"RESET));
	else if (grSign < 1 || grExec < 1)
		throw (GradeTooHighException());
	std::cout << "Parametric Constructor (AForm) for " << this->_name << std::endl;
}

AForm::AForm(AForm const &src):_name(src._name), _signed(src._signed), _grSign(src._grSign), _grExec(src._grExec){ 
	std::cout << "Copy constructor (AForm) of " << this->_name << std::endl;
}

AForm::~AForm( void ){
	std::cout << "Destructor (AForm) of " << this->_name << std::endl;
}

AForm	&AForm::operator=(AForm const &rhs){
	if (this == &rhs)
	   std::cout << "same memory adress ... no copy!" << std::endl;	
	else {
//		this->_name = rhs._name;
		this->_signed = rhs._signed;
//		this->_grSign = rhs._grSign;
		//TODO: Copier les autres
		std::cout << "Operator overload = (AForm)" << std::endl;
	}
	return (*this);
}

std::string	const &AForm::getName( void ) const{
	return (this->_name);
}

bool		AForm::getSigned( void ) const{
	return (this->_signed);
}

int			AForm::getGradeExec( void ) const{
	return (this->_grSign);
}

int			AForm::getGradeSign( void ) const{
	return (this->_grExec);
}

void		AForm::beSigned(Bureaucrat const &person ){
	if (this->_signed)
		throw (GradeTooLowException(RED + person.getName() + " couldn't sign " + this->_name + " because the form is already signed" + RESET));
	if (person.getGrade() <= this->_grSign){
		std::cout << GREEN << person.getName() << " signed " << this->getName() << RESET << std::endl;	
		this->_signed = true;
	}
	else
		throw (GradeTooLowException(RED + person.getName() + " couldn't sign " + this->_name + " because his grade is too low" + RESET));
//std::cout << RED << person.getName() << " is not allowed to sign form " << this->getName() <<  RESET << std::endl;	
}
	
const char	*AForm::GradeTooHighException::what()const throw(){	
	return (RED"The highest grade possible for the form is 1!"RESET );
}

AForm::GradeTooLowException::GradeTooLowException(std::string const &msg): _msg(msg){
}

AForm::GradeTooLowException::~GradeTooLowException( void ) throw(){

}
			
const char	*AForm::GradeTooLowException::what()const throw(){	
//	return (RED"The lowest grade for the form possible is 150!"RESET );
	return (this->_msg.c_str());
}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs){
	o << ITALIC << "Name of form           : " << rhs.getName() << std::endl;
	o << "is Signed ?            : " << std::boolalpha << rhs.getSigned() << std::endl;
	o << "grade required to Sign : " << rhs.getGradeSign() << std::endl;
	o << "grade required to Exec : " << rhs.getGradeExec() << RESET << std::endl;
	return (o);
}

