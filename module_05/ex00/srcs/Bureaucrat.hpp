/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:03:02 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/11 17:28:01 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <stdexcept>

#define	LOW 150
#define HIGH 1
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	Bureaucrat{

private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat( void );
	Bureaucrat( std::string name, int grade);
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( Bureaucrat const &rhs );

	const std::string	&getName( void )const ;
	int			getGrade( void )const ;
	void		incGrade( void );
	void		decGrade( void );

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const & rhs );
#endif
