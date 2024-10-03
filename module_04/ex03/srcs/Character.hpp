/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:23:40 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/03 21:53:42 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class	Character: public ICharacter{

private:
	AMateria	*_items[4];
	std::string	_name;

public:
	Character( void );
	Character(std::string name );
	Character( Character const &src );
	virtual ~Character( void );

	Character	&operator=( Character const &rhs );

	virtual std::string	const & getName() const;
	void		equip(AMateria *m);
/*	void		unequip(int idx);
	void		use(int idx, ICharacter &target);
*/
	void		showItems( void );
};

#endif
