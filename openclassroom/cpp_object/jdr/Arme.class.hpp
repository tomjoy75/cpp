/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:10:10 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/19 22:23:01 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARME_CLASS_H
# define ARME_CLASS_H

# include <string>
# include <iostream>

class	Arme{

public:
	Arme( void );
	Arme(std::string nom, int degats);
	~Arme( void );

	void	changer(std::string nom, int degats);
	void	afficher( void ) const;

private:
	std::string	_nom;
	int			_degats;

};

#endif

