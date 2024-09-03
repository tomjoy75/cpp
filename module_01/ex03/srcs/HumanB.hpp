/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:07:30 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/03 11:26:58 by tjoyeux          ###   ########.fr       */
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
	Weapon		*_weapon;

public:
	HumanB(std::string name);

	void	attack( void ) const;

	void	setWeapon( Weapon &weapon);
};

#endif
