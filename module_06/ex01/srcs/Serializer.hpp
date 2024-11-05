/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:44 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/05 16:55:07 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	Serializer{

public:
	static uintptr_t	serialize(Data *ptr);
	static Data		*deserialize(uintptr_t raw);

private:
	Serializer( void );
	Serializer( Serializer const &src);
	~Serializer( void );

	Serializer	&operator=(Serializer const &rhs);

};

#endif
