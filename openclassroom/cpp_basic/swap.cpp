/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:43:03 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 17:48:44 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	swap(int &a, int &b){

	int	tmp;

	tmp = a;
	a = b;
	b = tmp;
	return;
}

int	main( void ){

	int	a = 42, b = 21;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap (a, b);
	std::cout << "Apres swap" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	return (0);
}
