/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:31:06 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/19 15:18:46 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class	ClapTrap{

private:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_damage;

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap	const &src );
	~ClapTrap( void );

	ClapTrap	&operator= ( ClapTrap const &rhs );
	
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif
