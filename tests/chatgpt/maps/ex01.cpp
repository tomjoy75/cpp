/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:21:14 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/06 18:01:47 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercice 1 : Création d'une map et insertion de valeurs
Crée une std::map<std::string, int>.
Insère quelques paires clé-valeur, par exemple : "apple" -> 5, "banana" -> 2, "orange" -> 4.
Affiche les valeurs de la map à l’aide d’un itérateur.
Objectifs : te familiariser avec la syntaxe de base de la map, l’insertion et l’itération.
*/

#include <iostream>
#include <map>

int	main(void){

	std::map<std::string, int>	m;
	std::map<std::string, int>::iterator	it;

	m["banana"] = 2;
	m["apple"] = 5;
	m["orange"] = 4;
	it = m.begin();
	it++;
	std::cout << "1er element : " << it->first << " à la valeur " << it->second << std::endl;
	for (it = m.begin(); it != m.end(); ++it){
		std::cout << "There is " << it->second << " of " << it->first << std::endl;
	}
	return (0);
}
