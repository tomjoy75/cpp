/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:28:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/17 18:03:08 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( std::string fn, std::string ln, std::string n, std::string p, std::string s ): _fName(fn), _lName(ln), _nickname(n), _phoneNum(p), _secret(s){
	std::cout << "Constructor launched" << std::endl;

	return;
}

Contact::~Contact( void ){
	std::cout << "Destructor launched" << std::endl;

	return;
}

void	Contact::show( void ) const{
	std::cout << this->_fName << " | " <<  this->_lName << " | " << this->_nickname << std::endl; 

	return;
}

std::string	Contact::getFName( void ) const{
	return (_fName);
}

std::string	Contact::getLName( void ) const{
	return (_lName);
}

std::string	Contact::getNickname( void ) const{
	return (_nickname);
}

std::string	Contact::getPhoneNum( void ) const{
	return (_phoneNum);
}

std::string	Contact::getSecret( void ) const{
	return (_secret);
}

//void	Contact::setFName( string str);
