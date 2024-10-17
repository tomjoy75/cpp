/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/17 17:25:49 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm{

protected:
	std::string const	_name;
	bool				_signed;
	int const			_grSign;
	int const			_grExec;

	AForm( void );
	AForm( std::string name, int grSign, int grExec);
	AForm(AForm const &src);

public:

	virtual ~AForm( void );
	AForm	&operator=(AForm const &rhs);

	std::string const	&getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeExec( void ) const;
	int					getGradeSign( void ) const;

	void				beSigned( Bureaucrat const &person );
	virtual void		execute( Bureaucrat const &executor ) const = 0;

	class GradeTooHighException: public std::exception{
		public:
			virtual const char	*what()const throw();	
	};

	class GradeTooLowException: public std::exception{
		private:
			std::string	_msg;
		public:
			GradeTooLowException(std::string const &msg);
			virtual ~GradeTooLowException( void ) throw();

			virtual const char	*what()const throw();	
	};
	class FormNotSigned: public std::exception{
		public:
			virtual const char	*what()const throw();
	};
};
std::ostream	&operator<<(std::ostream &o, AForm const &rhs);
#endif
