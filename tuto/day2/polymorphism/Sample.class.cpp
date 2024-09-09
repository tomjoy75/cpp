/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:10:17 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/09 13:38:06 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ){
	std::cout << "Constructor launched" << std::endl;	
}
Sample::~Sample( void ){
	std::cout << "Destructor launched" << std::endl;	
}

void	Sample::bar(int const d) const{
	std::cout << "Member function bar called with int overload : " << d << std::endl;
}

void	Sample::bar(char const c) const{
	std::cout << "Member function bar called with char overload : " << c << std::endl;

}

void	Sample::bar(float const f) const{
	std::cout << "Member function bar called with float overload : " << f << std::endl;

}

void	Sample::bar(Sample const &i) const{
	std::cout << "Member function bar called with Sample overload : " << &i << std::endl;

}

