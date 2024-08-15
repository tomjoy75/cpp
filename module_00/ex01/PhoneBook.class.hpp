/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:56:08 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 14:11:32 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class	PhoneBook{

public:
	PhoneBook( void );
	~PhoneBook( void );

	void	add() ;
	void	search()const;
	void	exit() const;

private:


};
#endif
