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

// Vector
	std::vector<int>	vec(tab, tab + sizeof(tab) / sizeof(int));  
	std::vector<int>::const_iterator	itV;

	std::cout << BLUE << "With a vector" << RESET << std::endl;
	itV = easyfind(vec, 42);
	if (itV != vec.end())
		std::cout << "Founded : " << *itV << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itV = easyfind(vec, 0);
	if (itV != vec.end())
		std::cout << "Founded : " << *itV << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itV = easyfind(vec, 21);
	if (itV != vec.end())
		std::cout << "Founded : " << *itV << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itV = easyfind(vec, 84);
	if (itV != vec.end())
		std::cout << "Founded : " << *itV << std::endl;
	else
		std::cout << "Not found !" << std::endl;
//Deque
	std::cout << BLUE << "With a deque" << RESET << std::endl;
	std::deque<int>		dec(tab, tab + sizeof(tab) / sizeof(int));
	std::deque<int>::const_iterator		itD;

	itD = easyfind(dec, 42);
	if (itD != dec.end())
		std::cout << "Founded : " << *itD << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itD = easyfind(dec, 0);
	if (itD != dec.end())
		std::cout << "Founded : " << *itD << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itD = easyfind(dec, 21);
	if (itD != dec.end())
		std::cout << "Founded : " << *itD << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itD = easyfind(dec, 84);
	if (itD != dec.end())
		std::cout << "Founded : " << *itD << std::endl;
	else
		std::cout << "Not found !" << std::endl;
// List
	std::cout << BLUE << "With a list" << RESET << std::endl;
	std::list<int>		list(tab, tab + sizeof(tab) / sizeof(int));
	std::list<int>::const_iterator		itL;

	itL = easyfind(list, 42);
	if (itL != list.end())
		std::cout << "Founded : " << *itL << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itL = easyfind(list, 0);
	if (itL != list.end())
		std::cout << "Founded : " << *itL << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itL = easyfind(list, 21);
	if (itL != list.end())
		std::cout << "Founded : " << *itL << std::endl;
	else
		std::cout << "Not found !" << std::endl;
	itL = easyfind(list, 84);
	if (itL != list.end())
		std::cout << "Founded : " << *itL << std::endl;
	else
		std::cout << "Not found !" << std::endl;

	return (0);
}
