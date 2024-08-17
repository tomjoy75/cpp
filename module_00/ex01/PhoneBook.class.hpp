/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:56:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/17 18:05:38 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
class	PhoneBook{

public:
	PhoneBook( void );
	~PhoneBook( void );

	void	add() ;
	void	search()const;
	void	exit() const;

private:
	
	Contact	contacts[8];
	void	fillPhoneBook( void );
};
#endif
