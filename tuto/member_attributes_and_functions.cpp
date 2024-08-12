/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_attributes_and_functions.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 00:59:06 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/26 01:26:03 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main() {
	Sample	instance;//Va executer le constructeur
			 
	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();

	return 0;// Va executer le destructeur
}
