/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:51:35 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 16:14:15 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define NB_BRAIN 100

class	Brain{

public:
	Brain( void );
	Brain( Brain const &src);
	~Brain ( void );

	Brain	&operator=( Brain const &rhs );

private:
	std::string	_ideas[100];

};
#endif

