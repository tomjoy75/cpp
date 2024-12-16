/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomjoy75 <tomjoy75@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:45 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/16 18:59:00 by tomjoy75         ###   ########.fr       */
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
	int	myints[] = { 7, 6, 5, 4, 3, 2, 1};
	std::vector<int>	vec(myints, myints + 7);
	sort(vec.begin(), vec.end());

	return (0);
}