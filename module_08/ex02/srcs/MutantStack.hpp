/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:18:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/03 09:43:13 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>
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
class	MutantStack: public std::stack<T>{
public:
	MutantStack<T>( void ){};
//	MutantStack<T>( MutantStack<T> const &src ){*this = src;};
	MutantStack<T>( MutantStack<T> const &src ): _data(src._data){};
	~MutantStack<T>( void ){};

	MutantStack<T>	&operator=( MutantStack<T> const &rhs ){
		if ( this != &rhs )
		   this->_data = rhs.getData();
		return ( *this );
	}		
	bool			operator!=( MutantStack<T> const &rhs){return (this->_data != rhs.getData());};
	bool			operator==( MutantStack<T> const &rhs){return (this->_data == rhs.getData());};
	bool			operator<=( MutantStack<T> const &rhs){return (this->_data <= rhs.getData());};
	bool			operator>=( MutantStack<T> const &rhs){return (this->_data >= rhs.getData());};
	bool			operator<( MutantStack<T> const &rhs){return (this->_data < rhs.getData());};
	bool			operator>( MutantStack<T> const &rhs){return (this->_data > rhs.getData());};

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;

	std::deque<T> const	&getData( void ) const {return (_data);};
	std::deque<T> 		&getSetData( void ) {return (_data);};
	void	push(T var){this->_data.push_front(var);};
	//void	push(T var){std::stack<T>::push(var);};
	void	pop( void ){
		if (!(this->_data.empty()))
			this->_data.pop_front();
		else
			std::cerr << RED << "pop not usable : Empty container" << RESET << std::endl;
	};
	T	&top( void ){
		if (this->_data.empty())
			throw std::logic_error("top inaccessible : Empty container"); 
		return (this->_data.front());
	};
	int		size( void ){return (this->_data.size());};
	bool	empty( ){return (this->_data.empty());};
	void	swap(MutantStack<T> &rhs){
		if (this != &rhs)
			this->_data.swap(rhs.getSetData());
	};
	void	showData( void ) const{
		for (typename std::deque<T>::const_iterator it = this->_data.begin(); it != this->_data.end(); it++)
			std::cout << "\tdata : " << *it << std::endl;
	}
	iterator	begin(){return (_data.begin());};
	iterator	end(){return (_data.end());};
	const_iterator	begin() const{return (_data.begin());};
	const_iterator	end() const{return (_data.end());};
private:
	std::deque<T>	_data;
};
#endif

