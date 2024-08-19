/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:59:17 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 17:21:04 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int	main( void ){
	int	a(0), b(0);

	std::cout << "Premier entier :" << std::endl;
	std::cin >> a;
	std::cout << "Second entier :" << std::endl;
	std::cin >> b;
	std::cout << a << " ^ " << b << " = " << pow(a, b) << std::endl;

	return (0);
}
