/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:33:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/23 15:53:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_H
# define WARRIOR_H

# include "Character.hpp"

class	Warrior: public Character{
public:
	virtual void sayHello(std::string const &target);

};

#endif
