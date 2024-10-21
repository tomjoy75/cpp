/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:02:18 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/21 15:32:38 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
class RobotomyRequestForm : public AForm{
private:
	std::string	_target;

public:
	RobotomyRequestForm( void ); 
	RobotomyRequestForm( std::string target ); 
	RobotomyRequestForm( RobotomyRequestForm const &src); 	
	virtual ~RobotomyRequestForm( void ); 

	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs); 
	
	virtual void	execute(Bureaucrat const &executor) const;
	std::string	const &getTarget( void ) const;
	virtual	void	setTarget(std::string const &target);
};

#endif
