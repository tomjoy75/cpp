/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:40:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/21 14:24:07 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void){
	int	tab[] = {42, 53, 0, 21};	
	std::vector<int>	vec(tab, tab + sizeof(tab) / sizeof(int));  

	easyfind(vec, 42);
	easyfind(vec, 0);
	easyfind(vec, 21);
	easyfind(vec, 84);


	return (0);
}
