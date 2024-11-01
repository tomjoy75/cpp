/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:44 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/01 16:32:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <iostream>
# include <string>
# include <sstream>
# include <limits>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

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
