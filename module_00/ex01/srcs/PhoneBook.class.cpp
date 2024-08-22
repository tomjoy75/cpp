/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:37:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/22 11:20:00 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
//#include <limits>

PhoneBook::PhoneBook( void ): _nbContact( 0 ){
	std::cout << GREEN << BOLD << "Welcome to Your PhoneBook" << RESET << std::endl;
	this->start();

	return;
}

PhoneBook::~PhoneBook( void ){
	std::cout << GREEN << BOLD << "Good Bye!" << RESET << std::endl;
	return;
}

// Create a menu and call the right function
void	PhoneBook::start( void ){

	std::string	str;

	do{
		std::cout << GREEN << "(A)dd, (S)earch or (E)xit" << RESET << std::endl;
		std::getline(std::cin, str);
		if (str.length() == 1){
			switch (str[0]){
				case 'A':
					this->add();
					break;
				case 'S':
					this->search();
					break;
				case 'E':
					break;
				default:
					std::cout << "Wrong command" << std::endl;
					break;
			}
		}
		else
			std::cout << "Wrong command" << std::endl;
	} while (str != "E");
	std::cout << "Program finished" << std::endl;
}

void	PhoneBook::_move_contact( void ){

	for (int i = 1; i < CONTACT_MAX; i++){
		this->_contacts[i - 1] = this->_contacts[i];
	}
}

bool	_isPhoneNum(const std::string	&str){
	return (str.find_first_not_of("0123456789 ") == std::string::npos);
}

// launch the input to create a contact
// stock all the vars and create the Contact
void	PhoneBook::add( void ){
	std::string	fName;
	std::string	lName;
	std::string	nickname;
	std::string	phoneNum;
	std::string	secret;

	std::cout << "----------ADD----------" << std::endl;
	do{
		std::cout << "First name : ";
		std::getline(std::cin, fName);
	} while (fName.empty());
	do{
		std::cout << "Last name : ";
		std::getline(std::cin, lName);
	} while (lName.empty());
	do{
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
	} while (nickname.empty());
	do{
		std::cout << "Phone : ";
		std::getline(std::cin, phoneNum);
	} while (phoneNum.empty() || !_isPhoneNum(phoneNum));
	do{
		std::cout << "Best kept secret : ";
		std::getline(std::cin, secret);
	} while (secret.empty());
	if (this->_nbContact < CONTACT_MAX){
		_contacts[_nbContact] = Contact(fName, lName, nickname, phoneNum, secret);
		this->_nbContact++;
	}
	else if(this->_nbContact == CONTACT_MAX){
		std::cout << RED << ITALIC << "Your PhoneBook is full, we put out the oldest contact to put this new one." << RESET << std::endl;
		_move_contact();
		_contacts[CONTACT_MAX - 1] = Contact(fName, lName, nickname, phoneNum, secret);
	}
	std::cout << "-----------------------" << std::endl;
}

void	_header( void ){

	std::cout <<"___________________________________________" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout <<"___________________________________________" << std::endl;
}

std::string	_normalizeWord(std::string str){

	if (str.length() > 10){
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

// Search function
void	PhoneBook::search( void ) const{
	
	int	idx;

	if (_nbContact < 1){
		std::cout << RED << ITALIC << "Not enough contact" << RESET << std::endl;
		return;
	}
	_header();
	for (int i = 0; i < _nbContact; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout<< std::setw(10) << _normalizeWord(_contacts[i].getFName()) << "|";
		std::cout<< std::setw(10) << _normalizeWord(_contacts[i].getLName()) << "|";
		std::cout<< std::setw(10) << _normalizeWord(_contacts[i].getNickname()) << std::endl;
	}	
	std::cout <<"___________________________________________" << std::endl;
	do {
		std::cout << "Choose index between 1 and " << _nbContact << ": " ;
		std::cin >> idx; 
		if (!std::cin)
			std::cin.clear();
//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.ignore(256, '\n');
	} while (idx < 1 || idx > _nbContact);
	_contacts[idx - 1].showContact();
}
