/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:44:18 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/02 16:14:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

//# include "AMateria.hpp" 
//# include "Ice.hpp"
# include <iostream>

class AMateria;
class ICharacter{

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
//	virtual void equip(AMateria* m) = 0;
//	virtual void unequip(int idx) = 0;
//	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
