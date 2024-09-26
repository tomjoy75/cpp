/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:59:38 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/26 11:09:36 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public AAnimal{

public:
	Cat( void );
	Cat( Cat const &src);
	~Cat( void );

	Cat	&operator=(Cat const &rhs);

	virtual void	makeSound( void ) const;

private:
	Brain	*_brain;

};

#endif
