/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:18:05 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/10 17:52:21 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ){

	Array<int>	*empty = new Array<int>();
	std::cout << "size : " << empty->size() << std::endl;
	delete (empty);
	return ( 0 );
}
