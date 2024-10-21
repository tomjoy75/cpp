/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/18 15:46:10 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ):_name("noName"), _grade(HIGH){
	std::cout << "Default Constructor (Bureaucrat)" << std::endl;
}	

Bureaucrat::Bureaucrat( std::string name, int grade):_name(name){
	if (grade > LOW)
		throw (GradeTooLowException());
	else if (grade < HIGH)
		throw (GradeTooHighException());
	else{
		this->_grade = grade;
		std::cout << "Parametric Constructor (Bureaucrat) for " << this->_name << std::endl;
	}		
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ): _name(src._name), _grade(src._grade){
	std::cout << "Copy constructor (Bureaucrat) of " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Destructor (Bureaucrat) of " << this->_name << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs ){
	if (this == &rhs)
	   std::cout << "same memory adress ... no copy!" << std::endl;	
	else {
		this->_grade = rhs._grade;
		std::cout << "Operator overload = (Bureaucrat)" << std::endl;
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

void		Bureaucrat::signForm(AForm &form) const{
	form.beSigned(*this);
}
	
void		Bureaucrat::executeForm(AForm const &form) const{
	form.execute(*this);
	std::cout << ITALIC << this->_name << " execute " << form.getName() << RESET << std::endl << std::endl;
}
	
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return (RED"The lowest grade possible is 150!"RESET );
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return (RED"The highest grade possible is 1!"RESET);
}

std::string	makeLine( char c, int size, bool column ){
		
	if (column)
		return ("*" + std::string(size - 2, c) + "*\n");
	else
		return (std::string(size, c) + "\n");
} 

std::ostream	&operator<<(std::ostream &o, Bureaucrat const & rhs ){
	std::ostringstream os;
	os << "* " << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << " *";   
	int size = os.str().size();
	std::string line = makeLine('*', size, 0);
	line += makeLine(' ', size, 1);
	o << line << ITALIC << os.str() << RESET << std::endl << makeLine(' ', size, 1) << makeLine('*', size, 0);
	return (o);
}
