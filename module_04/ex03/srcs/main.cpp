/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:14:02 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/04 00:17:28 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(){
	std::cout << BLUE << BOLD << "-----INITIAL TEST-----" << RESET << std::endl;

	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
/*
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;*/
	delete src;

	std::cout << std::endl << BLUE << BOLD << "-----MORE TEST-----" << RESET << std::endl;
	std::cout << BLUE << "*****Tests des AMateria*****" << RESET << std::endl;
	
//	AMateria	*tmp = new Ice();
//	AMateria	*tmp2 = new Ice(tmp);
	std::cout << std::endl << GREEN << ITALIC << "Test of copy constructor and overload operator" << RESET << std::endl;
	std::cout << GREEN << ITALIC << "\tfor Ice :" << RESET << std::endl;
	Ice	ice_item;
	Ice	ice_cpy(ice_item);
	ice_cpy = ice_item;
//	delete (tmp);
	std::cout << GREEN << ITALIC << "\tfor Cure :" << RESET << std::endl;
	Cure	cure_item;
	Cure	cure_cpy(cure_item);
	cure_cpy = cure_item;
	std::cout << std::endl << GREEN << ITALIC << "Test of operator overload w same value" << RESET << std::endl;
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wself-assign-overloaded"
	ice_cpy = ice_cpy;
	cure_cpy = cure_cpy;
	#pragma clang diagnostic pop
	std::cout << std::endl << GREEN << ITALIC << "Test of clone function" << RESET << std::endl;
	AMateria	*newM = ice_item.clone();
	std::cout << "new item is : " << newM->getType() << std::endl;
	delete (newM);
	std::cout << BLUE << "*****Tests des Characters*****" << RESET << std::endl;
	Character	elsa("elsa");
	ice_item.use(elsa);
	cure_cpy.use(elsa);
	std::cout << "Character is " << elsa.getName() << std::endl;
	AMateria	*item1 = new Ice();
	AMateria	*item2 = new Cure();
	elsa.equip(item1);
	elsa.equip(item2);
	elsa.showItems();
	std::cout << std::endl << GREEN << ITALIC << "Test of deep copy in copy constructor" << RESET << std::endl;
	Character	elsa_copy(elsa);
	elsa_copy.showItems();
	std::cout << std::endl << GREEN << ITALIC << "Test of operator overload" << RESET << std::endl;
	elsa_copy = elsa;
	elsa_copy.showItems();
	std::cout << std::endl << GREEN << ITALIC << "Test of operator overload w same value" << RESET << std::endl;
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wself-assign-overloaded"
	elsa_copy = elsa_copy;
	#pragma clang diagnostic pop

	// elsa.equip(item);
	// elsa.equip(item);
	// elsa.equip(item);

	std::cout << std::endl << BLUE << BOLD << "-----PROGRAM FINISHED-----" << RESET << std::endl;
	return 0;
}
