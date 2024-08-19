/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_array.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:56:06 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 22:09:52 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ){

	const int	taille = 5;
	int		tableau[taille];

	tableau[0] = 10;
	std::cout << tableau[0] << std::endl;

	for(int i = 0; i < taille; i++){
		std::cout << "Entrez une valeur pour la case " << i << " : ";
		std::cin >> tableau[i];
	}
		
	for(int i = 0; i < taille; i++){
		if (i%2 == 0)
			tableau[i] = i / 2;
	}
	

	for(int i = 0; i < taille; i++){
		std::cout << "case " << i << " : " << tableau[i] << std::endl;
	}
	return (0);
}
