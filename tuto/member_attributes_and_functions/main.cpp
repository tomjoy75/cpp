/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:15:13 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 12:24:01 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main( void ){

	Sample	instance;
	
	instance.foo = 42;
	std::cout << "instance.foo = " << instance.foo << std::endl;
	instance.bar();
	return (0);
}
