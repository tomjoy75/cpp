/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:18:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/21 14:19:05 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

//int	easyfind(T const &numbers, int num){
template < typename T > // T should be an int container
typename T::const_iterator	easyfind(T const &numbers, int num){
	typename T::const_iterator	it;	
	it = std::find(numbers.begin(), numbers.end(), num);
	/*if (it != numbers.end())*/
	/*	std::cout << "Founded : " << *it << std::endl;*/
	/*else*/
	/*	std::cout << "Not Found " << std::endl;*/
	return (it);
}

#endif

