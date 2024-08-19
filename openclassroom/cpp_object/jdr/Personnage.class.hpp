/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:49:15 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 15:08:21 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSONNAGE_CLASS_H
# define PERSONNAGE_CLASS_H

# include <string>
# include <iostream>

class Personnage{
public:

	Personnage( void );
	Personnage( std::string nomArme, int degatsArme );
	~Personnage( void );
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;

private:

	int m_vie;
	int m_mana;
	std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
	int m_degatsArme;
};

#endif
