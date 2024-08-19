/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:50:39 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 15:14:22 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Personnage.class.hpp"

Personnage::Personnage() : m_vie(99), m_mana(100), m_nomArme("epee rouillee"), m_degatsArme(10){
}

Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(99), m_mana(100), m_nomArme(nomArme), m_degatsArme(degatsArme){
}

Personnage::~Personnage( void ){
	std::cout << "Destruction d'un personnage" << std::endl;
}

void Personnage::recevoirDegats(int nbDegats){
	m_vie -= nbDegats;
	if (m_vie < 0)
		m_vie = 0;	
}

void Personnage::attaquer(Personnage &cible){
	cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion){
	m_vie += quantitePotion;
	if (m_vie > 100)
		m_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){
	m_nomArme = nomNouvelleArme;
	m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() const{
	return (m_vie > 0);
}
