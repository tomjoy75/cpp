/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:31:06 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/20 11:38:15 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
#include <limits>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	ClapTrap{

protected:
	std::string	_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_damage;

public:
	ClapTrap( void );
	ClapTrap( std::string const name );
	ClapTrap( ClapTrap	const &src );
	~ClapTrap( void );

	ClapTrap	&operator= ( ClapTrap const &rhs );
	
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif
