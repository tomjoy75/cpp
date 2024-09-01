/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:32:31 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/30 23:53:39 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Student
{
	private:
		std::string	_login;

	public:
		Student(std::string const &login): _login(login){
		}

		std::string	&getLoginRef( void ) {
			return this->_login;
		}
		std::string const	&getLoginRefConst( void ) const{
			return this->_login;
		}
		std::string	*getLoginPtr( void ){
			return &(this->_login);
		}
		std::string const	*getLoginPtrConst( void ) const{
			return &(this->_login);
		}
};

int	main( void ){
	Student		bob = Student("bfoobar");
	Student const	jim = Student("jfoobar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfoobar";
	std::cout << bob.getLoginRefConst() << std::endl;
	
	return (0);
}
