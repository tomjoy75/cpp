/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:17:38 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 17:14:32 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"


ASpell::ASpell( std::string const &name, std::string const &effects ): _name(name), _effects(effects){};

void			ASpell::launch( ATarget	&src ){ src.getHitBySpell( *this ); };
