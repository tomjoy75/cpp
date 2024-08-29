/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:03:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/29 16:19:07 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student{

private:
	std::string	_login;

public:
	Student (void): _login("ldefault"){
		std::cout << "Student " << this->_login << " is born!" << std::endl;
		return;
	}

	Student( std::string login ): _login(login){
		std::cout << "Student " << this->_login << " is born!" << std::endl;
		return;
	}
	~Student( void ){
		std::cout << "Student " << this->_login << " is dead!" << std::endl;
		return;
	}
};

int	main( void ){

	Student	tom = Student( "Tom" );
	Student	*boris = new Student("Boris");
	Student	*defaut = new Student[5];
	// Program
	delete boris;
	delete [] defaut;
	return (0);
}

		
