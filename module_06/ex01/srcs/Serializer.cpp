/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/05 17:15:38 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &){}

Serializer::~Serializer(){}

Serializer	&Serializer::operator=(Serializer const &){return *this;};

uintptr_t	Serializer::serialize(Data *ptr){
	if (ptr == NULL){
		std::cout << RED << "Trying to serialize a Null pointer" << RESET << std::endl;
		return (0);
	}
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw){
	if (raw == 0){
		std::cout << RED << "Trying to deserialize a zero address : " << RESET;
		return (NULL);
	}
	return (reinterpret_cast<Data *>(raw));
}
