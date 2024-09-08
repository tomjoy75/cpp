/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:28:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/08 22:56:59 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){

	Harl	instance;

//	void	(*f)( void );

//	f = &Harl::debug;
//	(instance.*f)();
	instance.complain("debug");
	instance.complain("info");
	instance.complain("warning");
	instance.complain("error");
	instance.complain("error_double");
	

	return (0);
}
	
