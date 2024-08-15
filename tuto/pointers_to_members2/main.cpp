/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:03:10 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 11:13:30 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;
	Sample	*instancep = &instance;
	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;

	p = &Sample::foo;

	std::cout << "foo value is : " << instance.foo << std::endl;
	instance.*p = 24;
	std::cout << "foo value is : " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "foo value is : " << instance.foo << std::endl;

	return (0);
}
	
