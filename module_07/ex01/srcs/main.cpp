/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:22:37 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/10 17:09:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void ){

	int	tab[] = {42, 21, -42};
	std::string	tab2[] = {"Hello", "world"};
	char	tab3[] = {'O', 'K', '!'};
	
	std::cout << BLUE << BOLD << "-----INITIAL TESTS-----" << RESET << std::endl;
	std::cout << BLUE << "\twith an int" << RESET << std::endl;

	showTab(tab, 3);
	iter( tab, 3, incr );
	std::cout << ">>increment" << RESET << std::endl;
	showTab(tab, 3);
	iter( tab, 3, reset );
	std::cout << ">>deletion" << RESET << std::endl;
	showTab(tab, 3);

	std::cout << BLUE << "\twith a string" << RESET << std::endl;
	showTab(tab2, 2);
	iter( tab2, 2, incr );
	std::cout << ">>increment" << RESET << std::endl;
	showTab(tab2, 2);
	iter( tab2, 2, reset );
	std::cout << ">>deletion" << RESET << std::endl;
	showTab(tab2, 2);
	
	std::cout << BLUE << "\twith a char" << RESET << std::endl;
	showTab(tab3, 3);
	iter( tab3, 3, incr );
	std::cout << ">>increment" << RESET << std::endl;
	showTab(tab3, 3);
	iter( tab3, 3, reset );
	std::cout << ">>deletion" << RESET << std::endl;
	showTab(tab3, 3);
	

	return (0);
}
