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

//TODO: Creer exception si N depasse
void 		Span::addNumber( int N ){
	this->_data.insert(N);
};

unsigned int	Span::shortestSpan( void ){
	return( 42 );
};

unsigned int	Span::longestSpan( void ){
	return( 42 );
};
