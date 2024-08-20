/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:50:55 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 22:31:30 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Personnage.class.hpp"

int	main(void){
    //Création de 2 objets de type Personnage : david et goliath
/*    Personnage david, goliath("epee aiguisee", 20);

    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath attaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ? 
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);*/

	Personnage	david;
	david.afficherEtat();

	return (0);
}
