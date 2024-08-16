/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:00:31 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 16:53:19 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void){

	int	age;
	std::string	name;

	std::cout << "Quel est ton age? ";
	std::cin >> age;
	std::cin.ignore();
	std::cout << "Quel est ton nom? ";
	getline(std::cin, name);
	std::cout << "Tu as " << age << "ans, et tu t'appelles " << name << std::endl;

	return (0);
}
