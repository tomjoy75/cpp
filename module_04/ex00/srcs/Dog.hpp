/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:59:38 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/23 17:25:26 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog: public Animal{

public:
	Dog( void );
	Dog( Dog const &src);
	~Dog( void );

	Dog	&operator=(Dog const &rhs);

	virtual void	makeSound( void ) const;
};

#endif
