/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:56:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/18 22:43:29 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

class	PhoneBook{

public:
	PhoneBook( void );
	~PhoneBook( void );

	void	start( void );
	void	add( void );
	void	search( void ) const;
	void	exit( void ) const;

private:
	
	Contact	_contacts[8];
	int	_nbContact;
	void	fillPhoneBook( void );
};
#endif
