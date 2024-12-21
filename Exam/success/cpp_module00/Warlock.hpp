/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:29:41 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 15:51:10 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Warlock{
private:
	std::string	_name;
	std::string	_title;

public:
	Warlock( std::string const &name, std::string const &title );  
	~Warlock( void );

	std::string const	&getName( void ) const;
	std::string const	&getTitle( void ) const;
	void			setTitle( std::string const &src );
	void			introduce() const;
};
