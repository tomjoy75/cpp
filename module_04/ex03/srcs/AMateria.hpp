/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:17:32 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/01 13:13:45 by tjoyeux          ###   ########.fr       */
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
//	AMateria(AMateria const &src);
	~AMateria( void );
//	[...]

//	AMateria	&operator=(AMateria const &rhs);

	std::string const & getType() const; //Returns the materia type

//	virtual AMateria* clone() const = 0;
//	virtual void use(ICharacter& target);
};

#endif
