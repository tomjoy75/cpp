/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:08:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:57:33 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
//# include "ATarget.hpp"

class	ATarget;
class	ASpell{
protected:
	std::string	_name; 	
	std::string	_effects; 	
public:
	ASpell( std::string const &name, std::string const &effects );
	std::string const	&getName() const {return (_name);};
	std::string const	&getEffects() const {return (_effects);};
	ASpell const			*clone() const { return ( this ); };
	void			launch( ATarget	&src );

};
