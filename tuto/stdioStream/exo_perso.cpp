/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo_perso.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:26:46 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 10:35:46 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Coucou" << std::endl;
	std::cout << "Quelle est ta couleur preferee ?... " ;
	std::cin >> buff; 
	std::cout << "Ta couleur preferee est le " << buff << std::endl;  
}
