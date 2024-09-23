/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:28:57 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/21 21:09:38 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap{

public:
	FragTrap( void );
	FragTrap(std::string const name);
	FragTrap( FragTrap const &src);
	~FragTrap( void );

	FragTrap	&operator=( FragTrap const &rhs );

	void	highFivesGuys( void );
};

#endif
