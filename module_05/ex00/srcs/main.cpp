/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:10:32 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/11 17:40:17 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ){
	std::cout << BLUE << BOLD << "-----TESTING-----" << RESET << std::endl;
	std::cout << GREEN << ITALIC << "\tCreate a default bureaucrat :" << RESET << std::endl;
	Bureaucrat	nobody;
	std::cout << nobody;
	std::cout << GREEN << ITALIC << "\tIncrement his grade :" << RESET << std::endl;
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
	
	std::cout << BLUE << BOLD << "-----ENDING-----" << RESET << std::endl;
	return (0);
}
