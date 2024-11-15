/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:17:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/10 17:07:30 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

template <typename T>
void	incr(T &elem){
//	std::cout << "element : " << elem  << std::endl; 
//	std::cout << "element : " << elem + 1 << std::endl; 
	elem++;
}

template<>
void	 incr(std::string &elem){
//	std::cout << "element : " << elem << "_next" << std::endl; 
	elem += "_next";
}

template <typename T>
void	reset(T &elem){
	elem = T();
}

template <typename T>
void	iter(T *addr, int len, void (*f)(T &)){
	for (int i = 0; i < len; i++)
		(*f)(addr[i]);
}

template <typename T>
void	showTab( T const *addr, int len ){
	for (int i = 0; i < len; i++)
		std::cout << "element " << i << ": " << addr[i] << std::endl; 
	std::cout << "---------------" << std::endl;
}
		
#endif
