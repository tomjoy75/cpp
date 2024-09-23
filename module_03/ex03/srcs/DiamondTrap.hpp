/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:42:48 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/23 12:01:53 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, virtual public FragTrap {

public:
	DiamondTrap( void );
	DiamondTrap(std::string const name);
	DiamondTrap( DiamondTrap const &src);
	~DiamondTrap( void );

	DiamondTrap	&operator=( DiamondTrap const &rhs );

	void	whoAmI( void );
private:
	std::string	_name;
};

#endif
