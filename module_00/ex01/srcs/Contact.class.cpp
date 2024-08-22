/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:28:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/22 11:21:44 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( const std::string &fn, const std::string &ln, const std::string &n, const std::string &p, const std::string &s ): _fName(fn), _lName(ln), _nickname(n), _phoneNum(p), _secret(s){
	return;
}

Contact::Contact():_fName("Thomassssssssssssssssss"), _lName("Joyeux"), _nickname("toto"), _phoneNum("01000000"), _secret("None"){
	return;
}

Contact::~Contact( void ){
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

void		Contact::showContact( void ) const{
	std::cout << std::endl;
	std::cout << BLUE << "First Name : " << _fName << std::endl;
	std::cout << "Last Name : " << _lName << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phoneNum << std::endl;
	std::cout << "Best kept secret : " << _secret << std::endl;
	std::cout << RESET << std::endl;
}

