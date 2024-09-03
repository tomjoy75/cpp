/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:20:31 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/03 13:43:36 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main( void ){

	std::ifstream	ifs("numbers");
	if (!ifs.is_open()){
		std::cerr << "Erreur: Impossible d'ouvrir le fichier" << std::endl;
		return (1);
	}	
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//------------------------------------------
	
	std::ofstream	ofs("test.out");

	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
	return (0);
}

