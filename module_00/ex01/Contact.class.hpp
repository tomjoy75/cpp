/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:07:31 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/21 14:44:21 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	Contact{

public:
Contact( const std::string &fn, const std::string &ln, const std::string &n, const std::string &p, const std::string &s);
	Contact( void );
	~Contact( void );

//	void		show( void ) const;
	std::string	getFName( void ) const;
	std::string	getLName( void ) const;
	std::string	getNickname( void ) const;
//	std::string	getPhoneNum( void ) const;
//	std::string	getSecret( void ) const;
//	void		showTab( void ) const;
	void		showContact( void ) const;
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
