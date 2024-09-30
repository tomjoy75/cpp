/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:05:04 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/30 12:13:06 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ): _type("none"){
	std::cout << "AMateria : " << this->_type << " has been created!" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "AMateria : " << this->_type << " has been created!" << std::endl;
}
