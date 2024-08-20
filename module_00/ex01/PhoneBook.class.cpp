/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:37:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/20 21:09:37 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ): _nbContact( 0 ){
	std::cout << "Constructeur du PhoneBook launched" << std::endl;
	// Lancement du programme
//	this->fillPhoneBook(); // A enlever
	this->start();

	return;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "Destructeur du PhoneBook launched" << std::endl;
	return;
}

// Create a menu and call the right function
void	PhoneBook::start( void ){

	std::string	str;

	do{
		std::cout << "(A)dd, (S)earch or (E)xit" << std::endl;
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

// launch the input to create a contact
// stocke all the vars and create the Contact
//	return it
void	PhoneBook::add( void ){
	std::string	name;

	std::cout << "AddTest" << std::endl;
	if (this->_nbContact < CONTACT_MAX)
		this->_nbContact++;
	std::cout << "Name : ";
	std::getline(std::cin, name);
	std::cout << "Your name is " << name << std::endl;
//	std::cout << "First Name : "	
}
// void	PhoneBook::fillPhoneBook( void ){
// 	this->

void	header( void ){

	std::cout <<"___________________________________________" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout <<"___________________________________________" << std::endl;
}

std::string	normalizeWord(std::string str){

	if (str.length() > 10){
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

// Search function
void	PhoneBook::search( void ) const{
	
	std::string	idx;

	if (_nbContact < 1){
		std::cout << "Not enough contact" << std::endl;
		return;
	}
	header();
	for (int i = 0; i < _nbContact; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout<< std::setw(10) << normalizeWord(_contacts[i].getFName()) << "|";
		std::cout<< std::setw(10) << normalizeWord(_contacts[i].getLName()) << "|";
		std::cout<< std::setw(10) << normalizeWord(_contacts[i].getNickname()) << std::endl;
	}	
	std::cout <<"___________________________________________" << std::endl;
	do {
		std::cout << "Choose index between 1 and " << _nbContact << ": " ; // TODO: Check avec une lettre
		std::getline(std::cin, idx);
/*		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore();
		}
		std::cin.ignore();*/
	} while (j < 1 || j > _nbContact);
	_contacts[j - 1].showContact();
}
