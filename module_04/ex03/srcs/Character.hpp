/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:23:40 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/01 14:01:54 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class	Character: public ICharacter{

private:
//	AMateria	*_items[4];
	std::string	_name;

public:
	Character(std::string name);

	virtual std::string	const & getName() const;
/*	void		equip(AMateria *m);
	void		unequip(int idx);
	void		use(int idx, ICharacter &target);
*/
};

#endif
