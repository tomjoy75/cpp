/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:05:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 14:47:09 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

	RPN::RPN( void ){};

	RPN::RPN( RPN const &src){
		*this = src;
	};

	RPN::~RPN( void ){};

	RPN	&RPN::operator=( RPN const &src ){
		if (this != &src)
			*this = src;	
		return ( *this );
	};

void	RPN::showStack( void ) {
	while (!this->empty()){
		std::cout << this->top() << std::endl;
		this->pop();
	}
}

void	RPN::add( void ){
	if (this->size() < 2)
		throw std::invalid_argument("Error : Wrong expression");
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	this->push( rhs + lhs ); 
}

void	RPN::sub( void ){
	if (this->size() < 2)
		throw std::invalid_argument("Error : Wrong expression");
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	this->push( lhs - rhs ); 
}

void	RPN::mult( void ){
	if (this->size() < 2)
		throw std::invalid_argument("Error : Wrong expression");
	int	rhs = this->top();
	this->pop();
	int	lhs = this->top();
	this->pop();
	this->push( lhs * rhs ); 
}

void	RPN::div( void ){
	if (this->size() < 2)
		throw std::invalid_argument("Error : Wrong expression");
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

std::ostream	&operator<<( std::ostream &o, RPN const &rhs){
	o << rhs.top();
	return( o );
}

static bool	isDigit(char c){
	return (c >= '0' && c <= '9');
}

static bool	isWhitespace(char c){
	return ((c >= 9 && c <= 13) || c == ' ');
}

int		process( std::string const &str, std::string &output ){
	RPN		digits;
	
	for ( std::string::const_iterator it = str.begin(); it != str.end(); it++ ){
		if ( isDigit(*it) ){
			digits.push( *it - 48 );
		}
		else if ( isWhitespace(*it)){
			continue;
		}
		else {
			try {
				digits.operation(*it);
			}
			catch(std::invalid_argument &e){
				output = e.what();
				return (1);
			}
			catch(std::logic_error &e){
				output = e.what();
				return (1);
			}
			
		}
	}
	if ( digits.size() == 1 ){
		std::stringstream	ss;
		ss << digits;
		output = ss.str();
		return (0);
	}
	else 
		output = "Error : Wrong expression"; 
	return (1);
}
