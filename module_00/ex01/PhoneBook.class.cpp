/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:37:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/20 03:31:45 by joyeux           ###   ########.fr       */
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

	char	c;

	do{
		std::cout << "(A)dd, (S)earch or (E)xit" << std::endl;
		std::cin >> c;
		std::cin.ignore();
		switch (c){
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
	} while (c != 'E');
	std::cout << "Program finished" << std::endl;
}

// launch the input to create a contact
// stocke all the vars and create the Contact
//	return it
void	PhoneBook::add( void ){
	std::string	name;

	std::cout << "AddTest" << std::endl;
	if (this->_nbContact < 8)
		this->_nbContact++;
	std::cout << "Name : ";
	std::getline(std::cin, name);
	std::cout << "Your name is " << name << std::endl;
//	std::cout << "First Name : "	
}
// void	PhoneBook::fillPhoneBook( void ){
// 	this->

void	header( void ){

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
	
	int	j;

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
	do {
		std::cout << "Choose index : " ;
		std::cin >> j;
	} while (j < 1 || j > _nbContact);
	_contacts[j - 1].showContact();
}
