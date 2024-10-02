/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:42:26 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/02 15:55:57 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class	Cure: public AMateria{

public:
	Cure( void );
	Cure( Cure const & src);
	virtual ~Cure( void );

	Cure	&operator=( Cure const &rhs );

	virtual AMateria	*clone( void ) const;
	virtual void		use(ICharacter& target);
};

#endif
