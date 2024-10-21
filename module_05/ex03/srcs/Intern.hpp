/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:49:39 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/21 01:11:07 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

//# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"	 
# include "ShrubberyCreationForm.hpp"	 

class	Intern{

public:
	Intern( void );
	Intern( Intern const &src );
	~Intern( void );

	Intern	&operator=(Intern const &rhs );

	AForm	*makeForm(std::string name, std::string target) const;

	class	FormNotFound : public std::exception{
		public:
			const char	*what() const throw();
	};

private:
	AForm	*_forms[3];
};

#endif
