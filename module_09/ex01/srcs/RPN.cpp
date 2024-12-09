/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:05:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 13:27:54 by tjoyeux          ###   ########.fr       */
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

std::ostream	&operator<<( std::ostream &o, RPN const &rhs){
	o << rhs.top();
	std::cout << "TEST << : " << rhs.top() << std::endl;
	return( o );
}

static bool	isDigit(char c){
	return (c >= '0' && c <= '9');
}

static bool	isWhitespace(char c){
	return ((c >= 9 && c <= 13) || c == ' ');
}

int		process( std::string const &str ){
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
				std::cerr << RED << e.what() << RESET << std::endl;
				return (1);
			}
			catch(std::logic_error &e){
				std::cerr << RED << e.what() << RESET << std::endl;
				return (1);
			}
			
		}
		//	std::cout << "Number : " << *it << std::endl;
	}
	if ( digits.size() == 1 ){
		std::cout << digits << std::endl;
		return (0);
	}
	else 
		std::cerr << RED << "Error : Wrong expression" << RESET << std::endl;
	return (1);
}
