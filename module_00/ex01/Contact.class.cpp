/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:28:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 14:49:50 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( char *fn, char *ln, char *n, char *p, char *s ): f_name(fn), l_name(ln), nickname(n), phone_num(p), secret(s){
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
