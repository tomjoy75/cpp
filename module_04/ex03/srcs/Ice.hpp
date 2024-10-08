/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:42:26 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/02 15:56:18 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class	Ice: public AMateria{

public:
	Ice( void );
	Ice( Ice const & src);
	virtual ~Ice( void );

	Ice	&operator=( Ice const &rhs );

	virtual	AMateria	*clone( void ) const;
	virtual void		use(ICharacter& target);
};

#endif
