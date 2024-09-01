/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:14:55 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/01 13:07:08 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ){
	Zombie	*z_on_heap = newZombie("Marvin on the heap");
	z_on_heap->announce();
	randomChump("Neo on the stack");
	delete (z_on_heap);
	return (0);
}
