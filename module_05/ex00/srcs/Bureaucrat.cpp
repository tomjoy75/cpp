/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/11 17:43:02 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ):_name("noName"), _grade(HIGH){
	std::cout << "Default Constructor" << std::endl;
}	

Bureaucrat::Bureaucrat( std::string name, int grade):_name(name){
	if (grade > LOW)
		throw (GradeTooLowException());
	else if (grade < HIGH)
		throw (GradeTooHighException());
	else{
		this->_grade = grade;
		std::cout << "Parametric Constructor for " << this->_name << std::endl;
	}		
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ): _name(src._name), _grade(src._grade){
	std::cout << "Copy constructor of " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Destructor of " << this->_name << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs ){
	if (this == &rhs)
	   std::cout << "same memory adress ... no copy!" << std::endl;	
	else {
		this->_grade = rhs._grade;
		std::cout << "Operator overload =" << std::endl;
	}
	return (*this);
}

const std::string	&Bureaucrat::getName( void ) const{
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const{
	return (this->_grade);
}

void		Bureaucrat::incGrade( void ){
	if (this->_grade == HIGH)
		throw (GradeTooHighException());
	this->_grade--;
}

void		Bureaucrat::decGrade( void ){
	if (this->_grade == LOW)
		throw (GradeTooLowException());
	this->_grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return (RED"The lowest grade possible is 150!"RESET );
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return (RED"The highest grade possible is 1!"RESET);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const & rhs ){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade()   << std::endl;
	return (o);
}
