/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:31:43 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:52:58 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ATarget.hpp"

class	Dummy: ATarget{
public:
	Dummy( void ): _type("Target Practice Dummy"){};
	Dummy const	*clone( ) const { return (this); };

};
