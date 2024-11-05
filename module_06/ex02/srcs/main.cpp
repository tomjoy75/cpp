/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:13:14 by joyeux            #+#    #+#             */
/*   Updated: 2024/11/05 23:54:35 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <exception>

Base	*generate(void){
	Base	*p = NULL;
	int	i;

	srand (time(NULL));
	i = rand()%3;
	if (i == 0)
		p = new A;
	else if (i == 1)
		p = new B;
	else if (i == 2)
		p = new C;
	else
		std::cout << "Weird ..." << std::endl;
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
	}
	catch ( std::bad_cast &bc){
		std::cout << "Not A" << std::endl;
	}	
	std::cout << "adress Base " << &a << std::endl;
}

int	main( void ){
	
	Base *p = generate();
	std::cout << "adress is : " << p << std::endl;
	identify(p);
	delete (p);
	return (0);
}
