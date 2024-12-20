/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:08:39 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/20 16:27:12 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects): _name(name), _effects(effects){};
	
std::string const	&ASpell::getName( void ) const{ 
	return (this->_name);
}

std::string const	&ASpell::getEffects( void ) const{
	return (this->_effects);
}

ASpell const	*ASpell::clone() const{
	return ( this );
}
