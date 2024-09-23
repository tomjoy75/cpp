/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:16:37 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/23 12:25:06by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void){

	// Constructors
	std::cout << GREEN << BOLD << "\n----- Test : Constructors by default, w argument, by copy -----"<< RESET << std::endl; 
	DiamondTrap	def;
	DiamondTrap	foo("foo");
	DiamondTrap	copy(foo);
	

	// Test of attacks
	std::cout << GREEN << BOLD << "\n----- Test : Attack with enough hit points and energy -----"<< RESET << std::endl; 
	foo.attack("Marcel");
	foo.attack("Boris");
	
	// Test of whoAmI
	std::cout << GREEN << BOLD << "\n----- Test : whoAmI mode -----"<< RESET << std::endl; 
	foo.whoAmI();

	// Test of damages
	std::cout << GREEN << BOLD << "\n----- Test : Taking moderate damages -----"<< RESET << std::endl; 
	foo.takeDamage(5);
	foo.beRepaired(3);
	foo.takeDamage(10);

	// Attack with no hp
	std::cout << GREEN << BOLD << "\n----- Test : Trying to attack with no hit points -----"<< RESET << std::endl; 
	foo.attack("Marcel");
	foo.takeDamage(88);
	foo.attack("Marcel");
	
	// Test of recovery
	std::cout << GREEN << BOLD << "\n----- Test : Repair with no hit points -----"<< RESET << std::endl; 
	foo.beRepaired(5);

	// Test of high fives
	std::cout << GREEN << BOLD << "\n----- Test : whoAmI with no hit points -----"<< RESET << std::endl; 
	foo.whoAmI();

	// Test with INT_MAX
	std::cout << GREEN << BOLD << "\n----- Test : Repair with huge value to test limits -----"<< RESET << std::endl; 
	DiamondTrap	bar("bar");
	bar.takeDamage(5);
	bar.beRepaired(std::numeric_limits<unsigned int>::max());

	// Test of energy
	std::cout << GREEN << BOLD << "\n----- Test : Reduce energy to 0 -----"<< RESET << std::endl; 
	for (int i = 0; i < 50; i++){
		bar.attack("GrosBill");
	}

	// Test Attack and reparation w no energy
	std::cout << GREEN << BOLD << "\n----- Test : Attack, reparation and high fives w no energy -----"<< RESET << std::endl; 
	bar.attack("Pikachu");
	bar.beRepaired(10);
	bar.whoAmI();

	std::cout << GREEN << BOLD << "\n----- End of Tests -----"<< RESET << std::endl; 

	return (0);
}
