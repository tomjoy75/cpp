/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:37:53 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/17 18:08:39 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ){
	std::cout << "Constructeur du PhoneBook launched" << std::endl;
	// Lancement du programme
	this->fillPhoneBook(); // A enlever

	return;
}

PhoneBook::PhoneBook( void ){
	std::cout << "Destructeur du PhoneBook launched" << std::endl;
	return;
}

// launch the input to create a contact
// stocke all the vars and create the Contact
//	return it
Contact	PhoneBook::add( void ){
	std::cout << "First Name : "	

}
// void	PhoneBook::fillPhoneBook( void ){
// 	this->
