/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:08:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 12:48:53 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toupper_str(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			toupper_str(argv[i]);
			std::cout << argv[i];	
		}
		std::cout << std::endl;
	}
	return (0);
}

