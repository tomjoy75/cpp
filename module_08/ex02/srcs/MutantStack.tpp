/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:15:10 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/01 18:32:34 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
/*
Span::Span( void ):_n(0){}

Span::Span( unsigned int N ):_n(N){}

Span::Span( Span const &src ){
	*this = src;
}

Span::~Span( void ){}

Span	&Span::operator=(Span const &rhs){
	if (this != &rhs){
		this->_n = rhs.getN();
		this->_data = rhs.getData();
	}
	return ( *this );		
}

void		showContent(std::multiset<int> set){
	std::multiset<int>::const_iterator	it = set.begin();
	for (; it != set.end(); it++)
		std::cout << "item : " << *it << std::endl;

}

void		Span::showActualSize(std::multiset<int> set){
	std::cout << "Actual size of set is : " << set.size() << std::endl;
}

std::multiset<int> const	&Span::getData() const{
	return (this->_data);
}

int	const			&Span::getN() const{
	return (this->_n);
}

void 		Span::addNumber( int N ){
	if (this->_data.size() < static_cast<long unsigned int>(this->_n))
		this->_data.insert(N);
	else
		throw std::overflow_error("Container full");
}

void		Span::fillRandNumbers(){
    	std::srand(std::time(0));
	int	nb = this->_n - this->_data.size();
	int	tab[nb];
	for (int i = 0; i < nb; i++)
		tab[i] = std::rand() * ((std::rand() % 2 == 0) ? 1 : -1);
	this->_data.insert(tab, tab + nb);
}

unsigned int	Span::shortestSpan( void ){
	if ( this->_data.size() < 2 )
		throw std::logic_error("Not enough data");
	std::multiset<int>::const_iterator	it = this->_data.begin();
	std::multiset<int>::const_iterator	next_it = it;
	++next_it;
	int				lower = 0;

	if (next_it != this->_data.end())
		lower = *next_it - *it; 
	while (next_it != this->_data.end()){
		if (*next_it - *it < lower)
			lower = *next_it - *it;
		it++;
		next_it++;
	}
	return( lower );
}

unsigned int	Span::longestSpan( void ){
	if ( this->_data.size() < 2 )
		throw std::logic_error("Not enough data");
	return( *(--this->_data.end()) - *(this->_data.begin()) );
}*/
