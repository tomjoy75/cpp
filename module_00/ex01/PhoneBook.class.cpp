/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:37:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/18 23:12:49 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ): _nbContact( 2 ){
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

	std::cout << "AddTest" << std::endl;
//	std::cout << "First Name : "	
}
// void	PhoneBook::fillPhoneBook( void ){
// 	this->

// Search function
void	PhoneBook::search( void ) const{
	
	std::string	word;

	for (int i = 0; i < _nbContact; i++)
	{
		word = _contacts[i].getFName();
		if (word.length() > 10){
			word.resize(10);
			word[9] = '.';
		}
		std::cout<< std::setw(10) << word << "|";
		std::cout<< std::setw(10) << _contacts[i].getLName() << "|";
		std::cout<< std::setw(10) << _contacts[i].getNickname() << "|";
		std::cout<< std::setw(10) << _contacts[i].getPhoneNum() << std::endl;
	}	
}
