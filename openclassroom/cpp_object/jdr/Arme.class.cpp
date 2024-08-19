/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:19:24 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 16:28:39 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.class.hpp"

Arme::Arme(): _nom("Epee rouillee"), _degats(10){
}

Arme::Arme(std::string nom, int degats): _nom(nom), _degats(degats){
}

Arme::~Arme( void ){
	std::cout << "Arme detruite" << std::endl;
}

void	Arme::changer(std::string nom, int degats){
	_nom = nom;
	_degats = degats;
}

void	Arme::afficher() const{
	std::cout << "L'arme est : " << _nom << "qui inflige " << _degats << " point(s) de degats" << std::endl;
}
