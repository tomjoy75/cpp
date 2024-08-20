/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:50:39 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 22:44:17 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Personnage.class.hpp"

Personnage::Personnage() : m_vie(99), m_mana(100), m_arme("Epee rouillee", 10){
}

Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(99), m_mana(100), m_arme(nomArme, degatsArme){
}

Personnage::~Personnage( void ){
	std::cout << "Destruction d'un personnage" << std::endl;
}

void Personnage::recevoirDegats(int nbDegats){
	m_vie -= nbDegats;
	if (m_vie < 0)
		m_vie = 0;	
}
/*
void Personnage::attaquer(Personnage &cible){
	cible.recevoirDegats(m_degatsArme);
}*/

void Personnage::boirePotionDeVie(int quantitePotion){
	m_vie += quantitePotion;
	if (m_vie > 100)
		m_vie = 100;
}

/*void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){
	m_nomArme = nomNouvelleArme;
	m_degatsArme = degatsNouvelleArme;
}*/

bool Personnage::estVivant() const{
	return (m_vie > 0);
}

void Personnage::afficherEtat() const{
	std::cout << "PVie : " << m_vie << std::endl;
	std::cout << "PMana : " << m_mana << std::endl;
	m_arme.afficher();
//	std::cout << "nomArme : " << m_arme. << std::endl;
//	std::cout << "degatsArme : " << m_degatsArme << std::endl;
}

