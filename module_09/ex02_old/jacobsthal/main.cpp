/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:17:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/10 11:46:00 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <sstream>

int	jAlgo( int i ){
	int	result = 0;

	if ( i == 0 || i == 1)
		return ( result + i);
	return( jAlgo( i - 1 ) + 2 * jAlgo( i - 2 ) );
}

int	main(int argc, char **argv){
	if (argc < 2)
		return (1);
	std::stringstream	ss(argv[1]);
	int	max;
	ss >> max;
	for ( int i = 0; i <= max; i++ )
		std::cout << "for : " << i << " the result is " << jAlgo( i ) << std::endl;
	return (0);
}
