/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:43:58 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/05 14:50:58 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include <string>

class	Data{

public:
	Data( void );
	Data( std::string const &name);
	Data( const Data &src);
	~Data( void );

	Data	&operator=(const Data &rhs);

	std::string get_name() const;
private:
	std::string	_name;
};

#endif
