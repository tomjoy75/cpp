/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:59:17 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 17:03:02 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ){
	int	a(0), b(0);

	std::cout << "Premier entier :" << std::endl;
	std::cin >> a;
	std::cout << "Second entier :" << std::endl;
	std::cin >> b;
	std::cout << "Le résultat est " << a + b << std::endl;

	return (0);
}
