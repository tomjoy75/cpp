/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:07:31 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/16 22:49:59 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class	Contact{

public:
	Contact( std::string fn, std::string ln, std::string n, std::string p, std::string s);
	~Contact( void );

	void	show( void );

private:
	std::string	f_name;
	std::string l_name;
	std::string	nickname;
	std::string	phone_num;
	std::string	secret;

};

#endif
