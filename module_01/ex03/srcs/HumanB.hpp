/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:07:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/02 15:59:39 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB{

private:
	std::string	_name;
	Weapon		_weapon;

public:
	HumanB(std::string name);

	void	attack( void ) const;

	void	setWeapon( Weapon weapon);
};

#endif
