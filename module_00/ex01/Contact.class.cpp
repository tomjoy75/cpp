/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:28:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/20 03:38:29 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( std::string fn, std::string ln, std::string n, std::string p, std::string s ): _fName(fn), _lName(ln), _nickname(n), _phoneNum(p), _secret(s){
	std::cout << "Constructor1 du Contact launched" << std::endl;

	return;
}

Contact::Contact():_fName("Thomassssssssssssssssss"), _lName("Joyeux"), _nickname("toto"), _phoneNum("01000000"), _secret("None"){
	std::cout << "Constructor2 du Contact launched" << std::endl;
	return;
}

Contact::~Contact( void ){
	std::cout << "Destructor du Contact launched" << std::endl;

	return;
}

/*void	Contact::show( void ) const{
	std::cout << this->_fName << " | " <<  this->_lName << " | " << this->_nickname << std::endl; 

	return;
}*/

std::string	Contact::getFName( void ) const{
	return (_fName);
}

std::string	Contact::getLName( void ) const{
	return (_lName);
}

std::string	Contact::getNickname( void ) const{
	return (_nickname);
}

/*std::string	Contact::getPhoneNum( void ) const{
	return (_phoneNum);
	
}

std::string	Contact::getSecret( void ) const{
	return (_secret);
}*/

//void	Contact::setFName( string str);

void		Contact::showContact( void ) const{
	std::cout << std::endl;
	std::cout << "First Name : " << _fName << std::endl;
	std::cout << "Last Name : " << _lName << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phoneNum << std::endl;
	std::cout << "Best kept secret : " << _secret << std::endl;
	std::cout << std::endl;
}

