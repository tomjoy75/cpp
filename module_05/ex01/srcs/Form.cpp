/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:09:42 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/14 17:11:57 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ):_name("no_name"), _signed(false), _grSign(150), _grExec(150){
	std::cout << "Default Constructor (Form)" << std::endl;
}

Form::Form( std::string name, int grSign, int grExec): _name(name), _signed(false), _grSign(grSign), _grExec(grExec){
	if (grSign > 150 || grExec > 150)
		throw (GradeTooLowException());
	else if (grSign < 1 || grExec < 1)
		throw (GradeTooHighException());
	std::cout << "Parametric Constructor (Form) for " << this->_name << std::endl;
}

Form::Form(Form const &src):_name(src._name), _signed(src._signed), _grSign(src._grSign), _grExec(src._grExec){ //TODO: Doit on copier _signed ou l'initialiser a false ???
	std::cout << "Copy constructor (Form) of " << this->_name << std::endl;
}

Form::~Form( void ){
	std::cout << "Destructor (Form) of " << this->_name << std::endl;
}

Form	&Form::operator=(Form const &rhs){
	if (this == &rhs)
	   std::cout << "same memory adress ... no copy!" << std::endl;	
	else {
//		this->_name = rhs._name;
		this->_signed = rhs._signed;
//		this->_grSign = rhs._grSign;
		//TODO: Copier les autres
		std::cout << "Operator overload = (Form)" << std::endl;
	}
	return (*this);
}

std::string	const &Form::getName( void ) const{
	return (this->_name);
}

bool		Form::getSigned( void ) const{
	return (this->_signed);
}

int			Form::getGradeExec( void ) const{
	return (this->_grSign);
}

int			Form::getGradeSign( void ) const{
	return (this->_grExec);
}


void		Form::beSigned(Bureaucrat const &person ){
	if (person.getGrade() <= this->_grSign) 
		this->_signed = true;
}
	
const char	*Form::GradeTooHighException::what()const throw(){	
	return (RED"The highest grade possible for the form is 1!"RESET );
}

const char	*Form::GradeTooLowException::what()const throw(){	
	return (RED"The lowest grade for the form possible is 150!"RESET );
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs){
	o << ITALIC << "Name                   : " << rhs.getName() << std::endl;
	o << "is Signed ?            : " << std::boolalpha << rhs.getSigned() << std::endl;
	o << "grade required to Sign : " << rhs.getGradeSign() << std::endl;
	o << "grade required to Exec : " << rhs.getGradeExec() << RESET << std::endl;
	return (o);
}

