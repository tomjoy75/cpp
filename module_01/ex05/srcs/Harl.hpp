/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:37:07 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/08 22:53:32 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

# define NB_FUNC 4

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

