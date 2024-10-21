/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:10:32 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/21 01:23:15 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"	
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void ){
	std::cout << BLUE << BOLD << "-----TESTING-----" << RESET << std::endl;
	std::cout << BLUE << ITALIC << "\tCreate an Intern and a pointer to AForm" << RESET << std::endl;
	Intern someRandomIntern;
	AForm* rrf;

	std::cout << BLUE << ITALIC << "\tAssign a valid form" << RESET << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	std::cout << BLUE << ITALIC << "\tAssign an invalid form" << RESET << std::endl;
	try{
		rrf = someRandomIntern.makeForm("bad request", "Bender");
		std::cout << *rrf << std::endl;
	}
	catch (Intern::FormNotFound &e){
		std::cout << e.what() << std::endl;
	}
/*	std::cout << BLUE << ITALIC << "\tCreate several bureaucrats and forms:" << RESET << std::endl;
	AForm	*test = new ShrubberyCreationForm();
	ShrubberyCreationForm	home("home");
	ShrubberyCreationForm	home2(home);
	Bureaucrat				junior("Junior", 148);
	Bureaucrat				boss("Boss", 1);
	std::cout << BLUE << ITALIC << "\tTheir presentation" << RESET << std::endl;
	std::cout << junior << std::endl;
	std::cout << boss << std::endl;
	std::cout << home << std::endl;
	std::cout << home2 << std::endl;
	std::cout << BLUE << ITALIC << "\tTry to sign a form by a not allowed bureaucrat" << RESET << std::endl;
	try {
		junior.signForm(home);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tTry to execute a form not already signed:" << RESET << std::endl;
	try {
//		home.execute(boss);
		boss.executeForm(home);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tSign the form and execute:" << RESET << std::endl;
	boss.signForm(home);
	try {
	//	home.execute(boss);
		boss.executeForm(home);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tTry Sign the form already signed:" << RESET << std::endl;
	try {
		boss.signForm(home);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tTry to execute a form by a not allowed bureaucrat" << RESET << std::endl;
	try {
	//	home.execute(junior);
		junior.executeForm(home);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE << ITALIC << "\tExecute Robotomy request form:" << RESET << std::endl;
	RobotomyRequestForm	request("office");
	std::cout << boss << std::endl;
	boss.signForm(request);
	std::cout << std::endl << request << std::endl;
	try {
	//	home.execute(boss);
		boss.executeForm(request);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << BLUE << ITALIC << "\tExecute presidential pardon form:" << RESET << std::endl;
	PresidentialPardonForm	pardon("Manager's office");
	std::cout << boss << std::endl;
	boss.signForm(pardon);
	std::cout << pardon << std::endl;
	try {
	//	home.execute(boss);
		boss.executeForm(pardon);
	}
	catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
*/
	std::cout << BLUE << BOLD << "-----ENDING-----" << RESET << std::endl;
	delete (rrf);
//	delete (test);
	return (0);
}
