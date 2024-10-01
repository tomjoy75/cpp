/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:39:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/01 14:28:17 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource{

private:
	AMateria	*_items[4];

public:
	MateriaSource( void );
	~MateriaSource( void );

	virtual void learnMateria(AMateria*);
//	virtual AMateria* createMateria(std::string const & type);	
};

#endif
