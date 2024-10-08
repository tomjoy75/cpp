/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:03:02 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/08 17:13:24 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

class	Bureaucrat{

private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat( void );
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( Bureaucrat const &rhs );

	std::string	&getName( void );
	int			getGrade( void );
	void		incGrade( void );
	void		decGrade( void );
};

#endif
