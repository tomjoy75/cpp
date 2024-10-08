/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:57:42 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/03 10:14:51 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon{

private:
	std::string	_type;

public:
	Weapon( void );
	Weapon( std::string const type);
	~Weapon( void );

	std::string	const	&getType( void ) const;
	void			setType(std::string	const type);
};

#endif
