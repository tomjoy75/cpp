/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:02:18 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/17 23:21:27 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include "Form.hpp"
class PresidentialPardonForm : public AForm{
private:
	std::string	_target;

public:
	PresidentialPardonForm( void ); 
	PresidentialPardonForm( std::string target ); 
	PresidentialPardonForm( PresidentialPardonForm const &src); 	
	virtual ~PresidentialPardonForm( void ); 

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs); 
	
	virtual void	execute(Bureaucrat const &executor) const;
	std::string	const &getTarget( void ) const;
};

#endif
