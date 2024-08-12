/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:22:35 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 17:21:55 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample{

public:
	
	int	publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;

private:

	int		_privateFoo;

	void	_privateBar( void ) const;

};	

#endif
