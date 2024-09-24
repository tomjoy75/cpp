/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:03:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/24 15:06:27 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){

}

Brain::Brain( Brain const &src){
	if (this != &src)
		this = &src;
}

~Brain::Brain ( void ){

}

Brain	&Brain::operator=( Brain const &rhs ){

}

