/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:28:57 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/27 02:06:47 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	float const	pi;
	int		qd;

	Sample( float const f );
	~Sample( void );

	void bar( void ) const; // Le const ici signifie que cette fonction membre ne modifira jamais l'instance courante
};

#endif
