/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:56:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/29 15:15:19 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

# define CONTACT_MAX 8
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	PhoneBook{

public:
	PhoneBook( void );
	~PhoneBook( void );

	void	start( void );
	void	add( void );
	void	search( void ) const;

private:
	
	void	_move_contact( void );
	Contact	_contacts[CONTACT_MAX];
	int	_nbContact;
};
#endif
