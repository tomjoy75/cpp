/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:51:35 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/24 15:02:33 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain{

public:
	Brain( void );
	Brain( Brain const &src);
	~Brain ( void );

	Brain	&operator=( Brain const &rhs );

private:
	std::string	ideas[100];

};
#endif

