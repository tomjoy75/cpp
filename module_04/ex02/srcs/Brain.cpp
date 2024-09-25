/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:03:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 22:47:02 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Brain : has been created!" << std::endl;

}

Brain::Brain( Brain const &src)/*:_ideas(src._ideas)*/{
	for (int i = 0; i < NB_BRAIN; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << "Brain : has been copied! (copy constructor)" << std::endl;
}

Brain::~Brain ( void ){
	std::cout << "Brain : has been destroyed!" << std::endl;

}

Brain	&Brain::operator=( Brain const &rhs ){
	if (this != &rhs){
		for (int i = 0; i < NB_BRAIN; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	std::cout << "Brain : has been copied! (operator overload =)" << std::endl;
	return (*this);
}

