/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:28:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/09 00:04:12 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){

	Harl	instance;

//	void	(*f)( void );

//	f = &Harl::debug;
//	(instance.*f)();
	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
	instance.complain("ERROR_DOUBLE");
	

	return (0);
}
	
