/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:15:52 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/10 16:00:16 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class	Sample{

public:
	// 1.constructeur par defaut
	Sample( void );
	// 2.constructeur par copie
	Sample( Sample const &src);
	// opt.
	Sample( int const i);
	// 3.operateur = (permet de faire une autre assignation a partir de cette classe)
	Sample	&operator=(Sample const &rhs);
	// 4.destructeur
	~Sample( void);
	int	getFoo( void ) const;

private:
	int	_foo;
};

std::ostream	&operator<<(std::ostream &o, Sample const &next);
#endif
	
