/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:05:36 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/08 17:26:49 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

template< typename T >
void	swap(T &lhs, T &rhs ){
	T	temp;

	temp = lhs;
	lhs = rhs ;
	rhs  = temp;
}

template< typename T >
T const	&max(T const &lhs, T const &rhs ){
	return ( (lhs > rhs ) ? lhs : rhs ); 
}

template <typename T >
T const	&min( T const &lhs, T const &rhs ){
	return ( (lhs < rhs ) ? lhs : rhs );
}

template< typename T >
void	operations(T &lhs, T &rhs ){

	std::cout << BLUE << "Before swapping" << RESET << std::endl;
	std::cout << "\tValue 1 = " << lhs << std::endl;
	std::cout << "\tValue 2 = " << rhs  << std::endl;
	std::cout << "\tMaxValue = " << ::max( lhs, rhs  ) << std::endl;
	std::cout << "\tMinValue = " << ::min( lhs, rhs  ) << std::endl;
	
	::swap( lhs, rhs  );
	std::cout << BLUE << "After swapping" << RESET << std::endl;
	std::cout << "\tValue 1 = " << lhs << std::endl;
	std::cout << "\tValue 2 = " << rhs  << std::endl;
	std::cout << "\tMaxValue = " << ::max( lhs, rhs  ) << std::endl;
	std::cout << "\tMinValue = " << ::min( lhs, rhs  ) << std::endl;
	std::cout << "--------------------" << std::endl;
}

template< typename T, typename U >
void	operations(T &lhs, U &rhs ){
	std::cout << "\tValue 1 = " << lhs << std::endl;
	std::cout << "\tValue 2 = " << rhs  << std::endl;
	std::cout << RED << "Arguments should have the same type!" << RESET << std::endl;
}

#endif
