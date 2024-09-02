/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:59:34 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/02 15:54:16 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main( void ){
	
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
//		std::cout << "Test : " << club.getType() << std::endl;
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
/*	Weapon	w1;

	w1.setType("Arme rouillee");
	std::cout << "Arme : " << w1.getType() << std::endl;

	w1.setType("Arme neuve");
	std::cout << "Arme : " << w1.getType() << std::endl;
*/
	return (0);
}
