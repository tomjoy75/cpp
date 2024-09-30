/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:39:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/30 14:01:19 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource{
public:
	MateriaSource( void );
	~MateriaSource( void );

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);	
};

#endif
