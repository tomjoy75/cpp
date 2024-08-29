/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuto_dyma.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:55:07 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 16:05:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using	std::cout;
using	std::endl;
using	std::string;

int	main(void){

	string	name = "Bruno";
	name = "Delphine";
	cout << "Ton nom est " << name << " et il comporte " << name.length() << " caracteres" <<  endl;
	return (0);
}
