/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:27:12 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/26 11:11:26 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void){

	std::cout << BLUE << BOLD << "-----INITIAL TEST-----" << RESET << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl << BLUE << BOLD << "-----MORE TEST-----" << RESET << std::endl;
	std::cout << std::endl << GREEN << ITALIC << "Constructor of Array of Animals" << RESET << std::endl;

	AAnimal	*tab[6];

	for (int i = 0; i < 6; i++){
		std::cout << GREEN << BOLD << i << "." << RESET;
		if ( i % 2 )
			tab[i] = new Dog;
		else	
			tab[i] = new Cat;
	}
	std::cout << std::endl << GREEN << ITALIC << "Test of deep copy in copy constructor" << RESET << std::endl;
	std::cout << std::endl << GREEN << ITALIC << "\tDog" << RESET << std::endl;
	Dog	originalD;
	Dog	copyD(originalD);
	copyD = originalD;
	
	std::cout << std::endl << GREEN << ITALIC << "\tCat" << RESET << std::endl;
	Cat	originalC;
	Cat	copyC(originalC);
	copyC = originalC;
	
	std::cout << std::endl << GREEN << ITALIC << "Test of operator overload w same value" << RESET << std::endl;
	copyD = copyD;
	copyC = copyC;

	std::cout << std::endl << GREEN << ITALIC << "Destructor of Array of Animals" << RESET << std::endl;
	for (int i = 0; i < 6; i++){
		std::cout << GREEN << BOLD << i << "." << RESET;
		delete tab[i];
	}
	std::cout << std::endl << BLUE << BOLD << "-----PROGRAM FINISHED-----" << RESET << std::endl;

	return (0);
}
