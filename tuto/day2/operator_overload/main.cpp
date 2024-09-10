/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:33:47 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/10 12:21:28 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int	main(void){

	Integer	nb1(5);
	Integer	nb2(8);
	Integer	nb3(0);

	std::cout << "Value nb1 : " << nb1 << std::endl;
	std::cout << "Value nb2 : " << nb2 << std::endl;
	nb3 = nb1 + nb2;
	std::cout << "Value nb3 : " << nb3 << std::endl;

	return (0);
}
