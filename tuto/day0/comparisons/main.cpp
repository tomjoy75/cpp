/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:45:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 15:56:38 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance1( 42 );
	Sample	instance2( 42 );

	if (&instance1 == &instance1)
		std::cout << "instance 1 and instance 1 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not physically equal" << std::endl;
	
	if (&instance1 == &instance2)
		std::cout << "instance 1 and instance 2 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 2 are not physically equal" << std::endl;

	if (instance1.compare(&instance1) == 0)
		std::cout << "instance 1 and instance 1 are structurally equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not structurally equal" << std::endl;
	
	if (instance1.compare(&instance2) == 0)
		std::cout << "instance 1 and instance 2 are structurally equal" << std::endl;
	else
		std::cout << "instance 1 and instance 2 are not structurally equal" << std::endl;
	
	return (0);
}
