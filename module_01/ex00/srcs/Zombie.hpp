/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:03:25 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/01 13:01:24 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class	Zombie{

private:
	std::string	_name;

public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
	void	setName(std::string name);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name);

#endif
