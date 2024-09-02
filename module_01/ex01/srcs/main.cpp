/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:14:55 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/02 10:33:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ){
	int		nbZombie = 3;
	Zombie	*horde = zombieHorde(nbZombie, "Marvin");

	for (int i = 0; i < nbZombie; i++){
		horde[i].announce();
	}	
	delete [] (horde);
	return (0);
}
