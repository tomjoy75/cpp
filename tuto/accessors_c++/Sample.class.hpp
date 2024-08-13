/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:43:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 14:54:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample{

public:
	Sample( void );
	~Sample( void );
	void	setBar(int foo) ;
	int		getBar( void ) const;

private:
	int		_bar;
	void	_foo( void );

};

#endif
