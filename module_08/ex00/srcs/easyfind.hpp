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

//int	easyfind(T const &numbers, int num){
template < typename T > // T should be an int container
void	easyfind(T const &numbers, int num){
	typename T::const_iterator	it;	
	it = std::find(numbers.begin(), numbers.end(), num);
	if (it != numbers.end())
		std::cout << "Founded : " << *it << std::endl;
	else
		std::cout << "Not Found " << std::endl;
}

#endif

