/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:15:10 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/26 16:15:14 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ):_n(0){};

Span::Span( unsigned int N ):_n(N){};

void		showContent(std::multiset<int> set){
	std::multiset<int>::const_iterator	it = set.begin();
	for (; it != set.end(); it++)
		std::cout << "item : " << *it << std::endl;

}

//TODO: Creer exception si N depasse
void 		Span::addNumber( int N ){
	if (this->_data.size() < this->_n)
		this->_data.insert(N);
};

unsigned int	Span::shortestSpan( void ){
	showContent(this->_data);
	std::multiset<int>::const_iterator	it = this->_data.begin();
	std::multiset<int>::const_iterator	next_it = it;
	++next_it;
	int				lower = 0;

	if (next_it != this->_data.end())
		lower = *next_it - *it; 
	std::cout << "TEST lower : " << lower << std::endl;
	//else throw an exception
	while (next_it != this->_data.end()){
		if (*next_it - *it < lower)
			lower = *next_it - *it;
		it++;
		next_it++;
	}
	return( lower );
};

//TO DO creer exception
unsigned int	Span::longestSpan( void ){
	std::cout << "Begin : " << *(this->_data.begin()) << std::endl;
	std::cout << "End : " << *(--this->_data.end()) << std::endl;
	return( *(--this->_data.end()) - *(this->_data.begin()) );
};
