/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:07:31 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/15 14:59:24 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class	Contact{

public:
	Contact( char *fn, char *ln, char *n, char *p, char *s);
	~Contact( void );

	void	show( void );

private:
	string	f_name;
	char	*l_name;
	char	*nickname;
	char	*phone_num;
	char	*secret;

};

#endif
