/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:59:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/12 14:28:52 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _tab(NULL), _n(0){};

template <typename T>
Array<T>::Array( unsigned int n ) : _n(n){
	_tab = new T[n]();	
}

template <typename T>
Array<T>::Array(Array const &src): _n(src._n){
	this->_tab = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		this->_tab[i] = src._tab[i];	
}

template <typename T>
Array<T>::~Array( void ){
	delete [](_tab);	
}

template <typename T>
Array<T> const &Array<T>::operator=(Array<T> const &rhs){
	if ( this != &rhs ){
		delete [](this->_tab);
		this->_n = rhs.size();
		this->_tab = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			this->_tab[i] = rhs._tab[i];
	}
	return (*this);
}

template <typename T>
T const &Array<T>::operator[]( int idx) const{
	if (idx >= static_cast<int>(_n) || idx < 0)
		throw std::out_of_range("Out of range value");
	return (_tab[idx]);
}

template <typename T>
int	Array<T>::size( void ) const {
	return (_n);
}

template <typename T>
T	&Array<T>::getElem( unsigned int i ) const {
	if (i >= this->_n )
		throw std::out_of_range(RED"Out of range value"RESET);		
	return _tab[i];
}

template <typename T>
void	Array<T>::display(){
	for (unsigned int i = 0; i < _n; i++){
		std::cout << "element " << i << " : " << _tab[i] << std::endl;
	}
}

template <typename T>
void	Array<T>::setNewTab( T const &elem ){
	for (unsigned int i = 0; i < _n; i++){
		_tab[i] = elem;	
	}
}	
