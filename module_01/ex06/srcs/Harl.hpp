/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:37:07 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/08 23:42:06 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

# define NB_FUNC 4
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	Harl;

typedef struct	s_func {
	std::string	level;
	void (Harl::*function)( void );
}				t_func;

class	Harl{

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	static	t_func	_funcTab[4];

public:
	Harl( void );

	void	complain( std::string level );
};

#endif

