/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:02:18 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/16 16:33:35 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
class ShrubberyCreationForm : public AForm{
private:
	std::string	_target;

public:
	ShrubberyCreationForm( void ); 
	ShrubberyCreationForm( std::string target ); 
	ShrubberyCreationForm( ShrubberyCreationForm const &src); 	
	virtual ~ShrubberyCreationForm( void ); 

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs); 
	
	void	execute(Bureaucrat const &executor);
	std::string	&getTarget( void );
};

#endif
