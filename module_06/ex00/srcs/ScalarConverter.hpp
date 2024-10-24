/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:44 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/24 16:28:40 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <iostream>
# include <string>

class	ScalarConverter{

public:
	static void	convert( std::string const &str);

private:
	ScalarConverter( void );
	ScalarConverter( ScalarConverter const &src);
	~ScalarConverter( void );

	ScalarConverter	&operator=(ScalarConverter const &rhs);

};

#endif
