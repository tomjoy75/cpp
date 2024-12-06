/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:55:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/06 18:09:34 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"
# define DB "./files/data.csv"
# define BASE_YEAR 1970

class	BitcoinExchange{
private:
	std::map<std::string, float>	_data;
public:

	void				append(std::string line);
	void				showData( void );
	static long			convertDate( std::string const date);
	std::map<std::string, float>::iterator begin( void ) ;
	std::map<std::string, float>::iterator end( void ) ;
	std::string	const	findCorrectDate( std::string const date ) const;
	float				findCorrectValue( std::string const date ) const;
};
