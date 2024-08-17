/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:07:31 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/17 18:06:43 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class	Contact{

public:
	Contact( std::string fn, std::string ln, std::string n, std::string p, std::string s);
	~Contact( void );

	void		show( void ) const;
	std::string	getFName( void ) const;
	std::string	getLName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getPhoneNum( void ) const;
	std::string	getSecret( void ) const;
	// void		setFName( std::string str);
	// void		setLName( std::string str);
	// void		setNickname( std::string str);
	// void		setPhoneNum( std::string str);
	// void		setSecret( std::string str);


private:
	std::string	_fName;
	std::string _lName;
	std::string	_nickname;
	std::string	_phoneNum;
	std::string	_secret;

};

#endif
