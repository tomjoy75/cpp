/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:17:32 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/30 12:31:17 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
# include "ICharacter.hpp" 

class AMateria{
protected:
	std::string	_type;
//	[...]
public:
	AMateria( void );
	AMateria(std::string const & type);
//	[...]

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
