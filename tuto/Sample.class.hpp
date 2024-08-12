/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 00:46:18 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/26 18:47:10 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

class Sample1 {
public:
	char	a1;
	int	a2;
	float	a3;

	Sample1( char p1, int p2, float p3); //Constructeur
	~Sample1( void ); //Destructeur
};
#endif
