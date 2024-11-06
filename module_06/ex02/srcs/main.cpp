/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:13:14 by joyeux            #+#    #+#             */
/*   Updated: 2024/11/06 10:03:42 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <stdexcept>

Base	*generate(void){
	Base	*p = NULL;
	int	i;

	srand (time(NULL));
	i = rand()%3;
	if (i == 0){
		p = new A;
		std::cout << "Generate A !" << std::endl;
	}
	else if (i == 1){
		p = new B;
		std::cout << "Generate B !" << std::endl;
	}
	else if (i == 2){
		p = new C;
		std::cout << "Generate C !" << std::endl;
	}
	else{
		std::cout << RED << "Generation failed !" << RESET << std::endl;
		return ( NULL );
	}
	return (p);
}

void	identify(Base *p){
	Base	*a = dynamic_cast<A *>(p);
	if (a != NULL) {
		std::cout << "This is A form" << std::endl;
		return ;
	}
	Base	*b = dynamic_cast<B *>(p);
	if (b != NULL) {
		std::cout << "This is B form" << std::endl;
		return ;
	}
	Base	*c = dynamic_cast<C *>(p);
	if (c != NULL) {
		std::cout << "This is C form" << std::endl;
		return ;
	}
}

void	identify(Base &p){
	try{
		Base	&a = dynamic_cast<A &>(p);
		(void)a;
	}
	catch ( std::exception e){
		try{
			Base	&b = dynamic_cast<B &>(p);
			(void)b;
		}
		catch ( std::exception e){
			try{
				Base	&c = dynamic_cast<C &>(p);
				(void)c;
			}
			catch( std::exception e){
				std::cout << RED << "identification failed" << RESET << std::endl;
				return;
			}
			std::cout << "This is C form" << std::endl;
			return ;
		}
		std::cout << "This is B form" << std::endl;
		return ;
	}	
	std::cout << "This is A form" << std::endl;
}

int	main( void ){
	std::cout << BLUE << BOLD << "-----TESTING-----" << RESET << std::endl;	
	std::cout << BLUE << ITALIC << "\tGenerate randomly a base (A, B or C)" << RESET << std::endl;
	Base *p = generate();
	std::cout << BLUE << ITALIC << "\tIdentify this Base by pointer" << RESET << std::endl;
	identify(p);
	std::cout << BLUE << ITALIC << "\tIdentify this Base by reference" << RESET << std::endl;
	identify(*p);
	delete (p);
	return (0);
}
