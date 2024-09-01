/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:18:27 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/30 23:30:06 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and ponies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int	main()
{
	std::string	str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like also otters";
	byRef(str);
	byConstRef(str);

	return (0);
}
