/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/14 17:02:54 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Form{

private:
	std::string const	_name;
	bool				_signed;
	int const			_grSign;
	int const			_grExec;

public:
	Form( void );
	Form( std::string name, int grSign, int grExec);
	Form(Form const &src);
	~Form( void );

	Form	&operator=(Form const &rhs);

	std::string const	&getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeExec( void ) const;
	int					getGradeSign( void ) const;

	void		beSigned(Bureaucrat const &person );

	class GradeTooHighException: public std::exception{
		public:
			virtual const char	*what()const throw();	
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char	*what()const throw();	
	};
};
std::ostream	&operator<<(std::ostream &o, Form const &rhs);
#endif
