/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:30:42 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/17 16:59:42 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

int	main(void)
{
	Contact	first("tom", "joy", "gogo", "5151", "special");
	first.show();

	std::cout << "ton nom est " << first.getFName() << " et ton prenom est " << first.getLName() << std::endl;
	return (0);
}
