/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:27:12 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/24 15:28:35 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void){
	std::cout << BLUE << BOLD << "-----INITIAL TEST-----" << RESET << std::endl;
	// Constructors
	std::cout << BLUE << ITALIC << "\tconstructor animal" << RESET << std::endl;
	const Animal	*meta = new Animal();
	std::cout << BLUE << ITALIC << "\tconstructor dog" << RESET << std::endl;
	const Animal	*j = new Dog();
	std::cout << BLUE << ITALIC << "\tconstructor cat" << RESET << std::endl;
	const Animal	*i = new Cat();

	std::cout << BLUE << ITALIC << "\tget type of dog and cat" << RESET << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << BLUE << ITALIC << "\tmake sound of cat, dog and animal" << RESET << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
/*	std::cout << BLUE << ITALIC << "\tcheck of copy constructor" << RESET << std::endl;
	Animal	*k = new Cat(i);
	delete (k);*/ //TODO: Faire une check du copy constructor
	std::cout << BLUE << ITALIC << "\tdestroy animal, cat and then dog" << RESET << std::endl;
	delete(meta);
	delete(i);
	delete(j);
	std::cout << std::endl << BLUE << BOLD << "-----MORE TEST-----" << RESET << std::endl;
	std::cout << BLUE << ITALIC << "\tconstructor wrong animal and wrong cat" << RESET << std::endl;
	const WrongAnimal	*meta2 = new WrongAnimal();
	const WrongAnimal	*i2 = new WrongCat();

	std::cout << BLUE << ITALIC << "\tget type of wrong cat" << RESET << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	std::cout << BLUE << ITALIC << "\tmake sound of wrong cat and wrong animal" << RESET << std::endl;
	i2->makeSound(); //will output the wrong cat sound!
	meta2->makeSound();
	std::cout << BLUE << ITALIC << "\tdestroy wrong animal and then wrong cat" << RESET << std::endl;
	delete(meta2);
	delete(i2);
}
