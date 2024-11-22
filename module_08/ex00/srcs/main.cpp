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
#include <list>
#include <deque>

int main(void){
	int	tab[] = {42, 53, 0, 21};	
	std::vector<int>	vec(tab, tab + sizeof(tab) / sizeof(int));  
	std::vector<int>::const_iterator	it;

	std::cout << BLUE << "With a vector" << RESET << std::endl;
	it = easyfind(vec, 42);
	if (it != vec.end())
		std::cout << "Founded : " << *it << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	it = easyfind(vec, 0);
	if (it != vec.end())
		std::cout << "Founded : " << *it << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	it = easyfind(vec, 21);
	if (it != vec.end())
		std::cout << "Founded : " << *it << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	it = easyfind(vec, 84);
	if (it != vec.end())
		std::cout << "Founded : " << *it << std::endl;
	else
		std::cout << "Not found !" << std::endl;

	return (0);
}
