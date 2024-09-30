/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:34:57 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/30 14:19:28 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ){
	std::cout << "MateriaSource : has been created!" << std::endl;
}

MateriaSource::~MateriaSource( void ){
	std::cout << "MateriaSource : has been destroyed!" << std::endl;
}

void	MateriaSource::learnMateria(AMateria*){
	std::cout << "MateriaSource : learnMateria!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	std::cout << "MateriaSource : createMateria! of type "<< type << std::endl;
//	AMateria	*newMat = new AMateria(type); 
	return (new Ice());//TODO: Create conditions following the type of argument 
}
