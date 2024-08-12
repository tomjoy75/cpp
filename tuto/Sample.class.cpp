/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 00:51:53 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/26 01:12:42 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) { // Acces au constructeur Sample de la classe Sample
			 // Le constructeur et le destructeur n'ont pas de type de retour

	std::cout <<"Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout <<"Destructor called" << std::endl;
	return;
}

void	Sample::bar( void ) {
	std::cout << "Member function bar called" << std::endl;
	return;
}
