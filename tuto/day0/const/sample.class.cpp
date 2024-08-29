/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:38:37 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/27 02:04:25 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample( float const f ) : pi( f ), qd( 42 ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ){
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar( void ) const { // Le const empeche toute modification de l'ínstance courante
	std::cout << "this->pi = " << this->pi <<std::endl;
	std::cout << "this->qd = " << this->qd <<std::endl;

	// Si on essais de modifier un attribut de l'instance courante, ca ne compilera pas
	// Par ex: 
	// this->qd = 0;
	return ;
}

