/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:49:15 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 22:43:36 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSONNAGE_CLASS_H
# define PERSONNAGE_CLASS_H

# include <string>
# include <iostream>

# include "Arme.class.hpp"

class Personnage{
public:

	Personnage( void );
	Personnage( std::string nomArme, int degatsArme );
	~Personnage( void );
	void recevoirDegats(int nbDegats);
//	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
//	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;
	void afficherEtat() const;

private:

	int m_vie;
	int m_mana;
//	std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
//	int m_degatsArme;
	Arme m_arme;
};

#endif
