/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:51:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/05 16:22:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ):_name("noname"){};

Data::Data( std::string const &name):_name(name){};
Data::Data( const Data &src){
	*this = src;
};
Data::~Data( void ){};

Data	&Data::operator=(const Data &rhs)
{
	if (this != &rhs)
		this->_name = rhs.get_name();
	return (*this);
};

std::string Data::get_name() const{
	return (_name);
}
