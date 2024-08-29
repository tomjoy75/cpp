/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:39:39 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/12 17:35:14 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void){

	Sample	instance;

	instance.publicFoo = 21;
	std::cout << "this->publicFoo is now " << instance.publicFoo << std::endl;

//	instance._privateFoo = 13;
//	std::cout << "this->privateFoo is now " << instance._privateFoo << std::endl;

	instance.publicBar();
//	instance._privateBar();

	return (0);
}
