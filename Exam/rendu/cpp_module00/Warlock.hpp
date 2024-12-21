/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:29:41 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:52:29 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock{
private:
	std::string	_name;
	std::string	_title;
	std::map<ASpell>	_store;


public:
	Warlock( std::string const &name, std::string const &title );  
	~Warlock( void );

	std::string const	&getName( void ) const;
	std::string const	&getTitle( void ) const;
	void			setTitle( std::string const &src );
	void			introduce() const;
	void			learnSpell( ASpell *src ) { _store.push_back( *src )} ;
};
