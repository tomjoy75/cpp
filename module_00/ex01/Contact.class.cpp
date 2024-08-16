/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:28:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/16 22:51:08 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( std::string fn, std::string ln, std::string n, std::string p, std::string s ): f_name(fn), l_name(ln), nickname(n), phone_num(p), secret(s){
	std::cout << "Constructor launched" << std::endl;

	return;
}

Contact::~Contact( void ){
	std::cout << "Destructor launched" << std::endl;

	return;
}

void	Contact::show( void ){
	std::cout << this->f_name << " | " <<  this->l_name << " | " << this->nickname << std::endl; 

	return;
}
