/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:14:02 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/05 23:44:20 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(){
	std::cout << BLUE << BOLD << "-----INITIAL TEST-----" << RESET << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

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
	delete me;
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

	std::cout << BLUE << "*****Tests des MateriaSources*****" << RESET << std::endl;
	AMateria	*newIce = new Ice();
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(newIce);
	std::cout << std::endl << GREEN << ITALIC << "Test of deletion with same elements" << RESET << std::endl;
	src2->learnMateria(newIce);
	src2->showItems();
	delete (src2);
	std::cout << std::endl << GREEN << ITALIC << "Test of operator overload w same value" << RESET << std::endl;
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wself-assign-overloaded"
	MateriaSource src3;
	src3 = src3;
	#pragma clang diagnostic pop

	
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
	std::cout << std::endl << GREEN << ITALIC << "Test of use with corrects and wrong index" << RESET << std::endl;
	elsa.use(1, elsa_copy);
	elsa.use(0, elsa); //Use on self
	elsa.use(2, elsa_copy); //Empty slot
	elsa.use(42, elsa_copy); //too high slot
	elsa.use(-42, elsa_copy); //too low slot
	std::cout << std::endl << GREEN << ITALIC << "Test of unequip" << RESET << std::endl;
	elsa.unequip(0);
	elsa.unequip(1);
	elsa.unequip(2);
	elsa.showItems();
	

	// elsa.equip(item);
	// elsa.equip(item);
	// elsa.equip(item);

	std::cout << std::endl << BLUE << BOLD << "-----PROGRAM FINISHED-----" << RESET << std::endl;
	return 0;
}
