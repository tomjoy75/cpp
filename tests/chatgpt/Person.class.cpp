/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:15:57 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/08 11:32:07 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Person{

public:
	int	age;
	int	height;
};

int	main(void){

	Person	tom = {49, 188};
	Person	*nath;
	int	Person::*p_age = &Person::age;
	int	Person::*p_height = &Person::height;

//	tom.age = 49;
//	tom.height = 188;
	nath->age = 35;
	nath->height = 163;
	tom.*p_age = 50;

	std::cout << "Tom a " << tom.*p_age << " ans et mesure " << tom.*p_height << " cm." << std::endl;
	std::cout << "Nath a " << nath->*p_age << " ans et mesure " << nath->*p_height << " cm." << std::endl;

	return (0);
}
