/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:05:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 00:42:15 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	RPN::showStack( void ) {
	while (!this->empty()){
		std::cout << this->top() << std::endl;
		this->pop();
	}
}

void	RPN::add( void ){
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	this->push( rhs + lhs ); 
//	return ( rhs + this->top() );
}

void	RPN::sub( void ){
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	this->push( lhs - rhs ); 
}

void	RPN::mult( void ){
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	this->push( lhs * rhs ); 
}

// Check division by zero
void	RPN::div( void ){
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	if (rhs == 0)
		throw std::logic_error("Error : Division by zero");
	this->push( lhs / rhs ); 
}

void	RPN::operation( char const c ){
	switch ( c ){
		case ADD:
			this->add();
			break;
		case SUB:
			this->sub();
			break;
		case MULT:
			this->mult();
			break;
		case DIV:
			this->div();
			break;
		default :
			throw std::invalid_argument("Error : Invalid character");
	}
}
