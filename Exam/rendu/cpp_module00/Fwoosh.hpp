/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:31:43 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:40:46 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ASpell.hpp"

class	Fwoosh: ASpell{
public:
	Fwoosh( void ): _name("Fwoosh"), _effects("fwooshed"){};
	Fwoosh const	*clone( ) const { return (this); };

};
