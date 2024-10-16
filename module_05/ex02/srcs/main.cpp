/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:10:32 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/16 16:21:37 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"	

int	main( void ){
	std::cout << BLUE << BOLD << "-----TESTING-----" << RESET << std::endl;
	AForm	*test = new ShrubberyCreationForm();
	ShrubberyCreationForm	home("home");
	ShrubberyCreationForm	home2(home);
	Bureaucrat				tom("tom", 122);
	home2.execute(tom);
	delete (test);
/*	std::cout << BLUE << ITALIC << "\tCreate a default bureaucrat and default form:" << RESET << std::endl;
	Bureaucrat	nobody;
	std::cout << nobody;
	Form		noform;
	std::cout << BLUE << ITALIC << "\tCreate a parametric bureaucrat and parametric form:" << RESET << std::endl;
	Bureaucrat	tom("Thomas", 128);
	std::cout << tom;
	Form		law("Law", 14, 13);
	std::cout << BLUE << ITALIC << "\tUtilize operator overload << on forms:" << RESET << std::endl;
//	std::cout << nobody;
	std::cout << noform;
	std::cout << "--------------------" << std::endl;
	std::cout << law;
	std::cout << BLUE << ITALIC << "\tCreate 2 wrong parametric form:" << RESET << std::endl;
	try {
		Form		form1("form1", 45, 151);
	}
	catch (Form::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	try {
		Form		form2("form1", -42, 123);
	}
	catch (Form::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tSignature of forms : grade correct" << RESET << std::endl;
	nobody.signForm(noform);
	std::cout << BLUE << ITALIC << "\tSignature of forms : grade incorrect" << RESET << std::endl;
	try {
		tom.signForm(law);
	}
	catch (Form::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tSignature of forms : already signed" << RESET << std::endl;
	try {
		nobody.signForm(noform);
	}
	catch (Form::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << ITALIC << "\tIncrement his grade (should'nt):" << RESET << std::endl;
	try {
		nobody.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	std::cout << nobody;
	std::cout << GREEN << ITALIC << "\tCreate a parametric bureaucrat :" << RESET << std::endl;
	Bureaucrat	alan("Alan", 150);
	try {
	}
	catch (Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	std::cout << alan;
	std::cout << GREEN << ITALIC << "\tCreate a wrong parametric bureaucrat :" << RESET << std::endl;
	try {
		Bureaucrat	boris("Boris", 15656);
	}
	catch (Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << ITALIC << "\tTrying to decrement Alan :" << RESET << std::endl;
	try {
		alan.decGrade();
	}
	catch (Bureaucrat::GradeTooHighException e){
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
*/	
	std::cout << BLUE << BOLD << "-----ENDING-----" << RESET << std::endl;
	return (0);
}
