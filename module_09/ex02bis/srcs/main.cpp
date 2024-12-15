/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/12 16:56:30 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
/*
int	main(int argc, char **argv){
	if ( argc < 2 ){
		std::cerr << RED << "Error: No arguments" << RESET << std::endl;
		return (1);
	}
	std::vector<int>	vec(argv[1], argv[argc]);
	for (unsigned long i = 0; i < vec.size(); i++){
		std::cout << "Value : " << i << " = " << vec[i] << std::endl;
	}
}
*/

int	main( void ){
	int	myints[] = { 5, 4, 3, 2, 1};
	std::vector<int>	vec(myints, myints + 5);
	merge_insertion_sort_impl(vec.begin(), vec.end(), std::less<int>());

	return (0);
}