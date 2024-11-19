/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lvl1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:58:15 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/19 14:34:02 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Niveau 1 : Découverte des conteneurs et itérateurs

    Manipulation de std::vector :
        Crée un programme qui :
            Remplit un std::vector<int> avec les nombres de 1 à 10.
            Affiche les éléments avec un itérateur.
            Trie les éléments en ordre décroissant à l'aide de std::sort.

    Itérateurs avec std::list :
        Crée une std::list<std::string> contenant quelques mots.
        Parcours et affiche les éléments avec un itérateur.
        Supprime tous les mots contenant moins de 4 lettres avec std::remove_if et un itérateur.

    Exploration de std::set :
        Crée un std::set<int> et insère des nombres en double.
        Affiche les éléments (observe leur unicité).
        Recherche si un élément donné existe avec std::find.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int	myfunc( int a, int b ){
//	std::cout << "sort : a = " << a << " b = " << b << " a > b ? " << (a > b) << std::endl; 
	return (b < a);
}

void	show( std::vector<int> vec ){
	std::vector<int>::const_iterator it = vec.begin();
	for (;it < vec.end(); it++){
		std::cout << ".." << *it << ".." ;
	}
	std::cout << std::endl;
	std::cout << "----------" << std::endl;
}

int	main( void ){
	std::vector<int>	vec;
	std::vector<int>::const_iterator	vec_it;

	for (int i = 1; i <=10; i++){
		vec.push_back(i);
	}
//	for (vec_it = vec.begin(); vec_it != vec.end(); ++vec_it){
//		std::cout << "Value " << *vec_it << std::endl;
//	}
	std::cout << "BEFORE SORTING" << std::endl;
	show( vec );
	std::sort(vec.begin(), vec.end(), myfunc);
//	for (vec_it = vec.begin(); vec_it != vec.end(); vec_it++){
//		std::cout << "Value " << *vec_it << std::endl;
//	}
	std::cout << "AFTER SORTING" << std::endl;
	show( vec );
	std::cout << "AFTER INSIDE SORTING" << std::endl;
	std::sort(vec.begin() + 2, vec.end() - 2 );
	show( vec );

	return (0);
}	

