/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:41:59 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/13 18:09:33 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main( void ){

	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;

	p = &Sample::foo;
	
	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instance.*p = 42;
	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instancep->*p = 21;
	std::cout << "Value of member foo : " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}

