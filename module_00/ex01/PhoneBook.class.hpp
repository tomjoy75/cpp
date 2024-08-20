/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:56:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/20 14:17:01 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

# define CONTACT_MAX 8

class	PhoneBook{

public:
	PhoneBook( void );
	~PhoneBook( void );

	void	start( void );
	void	add( void );
	void	search( void ) const;
//	void	exit( void ) const;

private:
	
	Contact	_contacts[CONTACT_MAX];
	int	_nbContact;
//	void	_fillPhoneBook( void );
};
#endif
