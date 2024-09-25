/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:59:38 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 13:45:11 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal{

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
