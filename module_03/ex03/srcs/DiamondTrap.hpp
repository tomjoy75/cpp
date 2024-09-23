/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:42:48 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/21 21:14:27 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
	DiamondTrap( void );
	DiamondTrap(std::string const name);
	DiamondTrap( DiamondTrap const &src);
	~DiamondTrap( void );

	DiamondTrap	&operator=( DiamondTrap const &rhs );

private:
	std::string	_name;
};

#endif
