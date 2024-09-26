/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:59:38 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/26 11:07:15 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	AAnimal{
protected:
	std::string	_type;

public:
	AAnimal( void );
	AAnimal( AAnimal const &src);
	virtual ~AAnimal( void );

	AAnimal	&operator=(AAnimal const &rhs);

	virtual void		makeSound( void ) const = 0;
	std::string const	&getType( void ) const;
};

#endif
