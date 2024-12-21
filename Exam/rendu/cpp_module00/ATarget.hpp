/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:54:28 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:58:35 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
//# include "ASpell.hpp"
# include <iostream>

class	ASpell;

class	ATarget{
	protected:
		std::string	_type;
	public:
		ATarget( std::string const &type ): _type(type){};
		std::string const	&getType() const {return ( _type );};
		ATarget	const		*clone() const { return ( this );};
		void			getHitBySpell( ASpell const &src ) const ;
};

