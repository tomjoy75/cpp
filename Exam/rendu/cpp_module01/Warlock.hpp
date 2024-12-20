/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:04:17 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/20 15:38:11 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	Warlock{
private:
	std::string	_name;
	std::string	_title;
public:
	Warlock(std::string const &name, std::string const &title); 
	~Warlock( void );
	
	std::string const	&getName( void ) const { return(_name);};
	std::string const	&getTitle( void )const { return(_title);};
	void	setTitle( std::string const &title );
	void	introduce( void ) const;
};
