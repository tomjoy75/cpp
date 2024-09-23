/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:42:06 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/23 15:50:04 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp" 

int	main(void){
	Warrior		*w1 = new Warrior();
	Character	*w2 = new Warrior();

	w1->sayHello("Thomas");
	w2->sayHello("Thomas");
	delete (w1);
	delete (w2);
	return (0);
}
