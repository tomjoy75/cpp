/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:58:52 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 15:08:26 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.setBar( 42 );
	std::cout << "The new foo is " << instance.getBar() << std::endl;

	instance.setBar( -42 );
	std::cout << "The next new foo is " << instance.getBar() << std::endl;

	return (0);
}
