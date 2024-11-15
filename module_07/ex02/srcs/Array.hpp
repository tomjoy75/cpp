/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:13:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/11 18:52:02 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

template <typename T>
class	Array{

public:
	Array( void ) : _tab(NULL), _n(0){};
	Array( unsigned int n ) : _n(n){
		_tab = new T[n]();	
	};
	Array(Array const &src): _n(src._n){
		this->_tab = new T[_n]();
		for (int i = 0; i < _n; i++)
//			this->_tab[i] = src.getElem(i);	
			this->_tab[i] = src._tab[i];	
	};
	~Array( void ){
		delete [](_tab);	
	};

	Array &operator=(Array const &rhs){
		if ( this != &rhs ){
			delete [](this->_tab);
			this->_n = rhs.size();
			this->_tab = new T[this->_n];
			for (int i = 0; i < this->_n; i++)
	//			this->_tab[i] = rhs.getElem(i);	
				this->_tab[i] = rhs._tab[i];
		}
		return (*this);
	}

	T const &operator[]( int idx) const{
		if (idx >= static_cast<int>(_n) || idx < 0)
			throw std::out_of_range("Out of range value");
		return (_tab[idx]);
	};

	int	size( void ) const {return (_n);};

//	T	&getElem( unsigned int i ) const {
//		if (i >= this->_n )
//			throw std::out_of_range("Out of range value");		
//		return _tab[i];
//	};
	void	display(){
		for (int i = 0; i < _n; i++){
			std::cout << "element " << i << " : " << _tab[i] << std::endl;
		}
	}

private:
	T				*_tab;
	unsigned int	_n;
};

#endif
