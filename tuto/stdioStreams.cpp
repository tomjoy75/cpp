/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdioStreams.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:32:59 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/07/23 16:37:55 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Hello World!" << std::endl;
	std::cout << "Enter a name: ";
	std::cin >> buff;
	std::cout << "Name is : " << buff << std::endl;
	return (0);
}
