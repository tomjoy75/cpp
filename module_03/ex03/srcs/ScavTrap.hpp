/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:11:02 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/21 21:09:51 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap{

public:
	ScavTrap( void );
	ScavTrap(std::string const name);
	ScavTrap( ScavTrap const &src);
	~ScavTrap( void );

	ScavTrap	&operator=( ScavTrap const &rhs );

	void	attack( std::string const &target );
	void	guardGate();
};

#endif
