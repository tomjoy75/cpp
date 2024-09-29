/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:17:32 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/28 11:50:47 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_H
# define MATERIA_H

# include <iostream>
# include <string>

class AMateria{
protected:
	std::string	_type;
	[...]
public:
	AMateria(std::string const & type);
	[...]

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
