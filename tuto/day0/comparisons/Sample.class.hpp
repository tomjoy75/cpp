/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:21:04 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 15:58:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample{

public:
	Sample( int v);
	~Sample( void );

	int	getFoo( void ) const;
	int compare(Sample *other) const;

private:
	int	_foo;
};

#endif
