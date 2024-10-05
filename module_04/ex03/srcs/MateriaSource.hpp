/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:39:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/05 23:20:59 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource{

private:
	AMateria	*_items[4];
//	AMateria	*_created;
//	int		_nb;

public:
	MateriaSource( void );
	MateriaSource( MateriaSource const &src);
	~MateriaSource( void );

	MateriaSource	&operator=(MateriaSource const &rhs);
	
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);	
	void	showItems( void );
};

#endif
