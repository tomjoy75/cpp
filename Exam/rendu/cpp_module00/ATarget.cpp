/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:25:49 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:28:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"


void			ATarget::getHitBySpell( ASpell const &src ) const { 
	std::cout << _type << " has been " << src.getEffects() <<std::endl;
};
