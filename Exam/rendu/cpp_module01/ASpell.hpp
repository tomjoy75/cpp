/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:45:40 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/20 16:26:57 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	ASpell{
protected:
	std::string	_name;
	std::string	_effects;
public:
	ASpell(std::string const &name, std::string const &effects);

	std::string const	&getName( void ) const;
	std::string const	&getEffects( void ) const;
	ASpell const	*clone( void ) const;
};

