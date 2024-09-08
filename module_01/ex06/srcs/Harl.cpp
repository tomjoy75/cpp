/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:48:44 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/08 23:57:51 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
	std::cout << BLUE << BOLD << "Lancement Harl 2.0" << RESET << std::endl;
}

void	Harl::debug( void ){
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do !\n" << std::endl;
}

void	Harl::info( void){
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger !\nIf you did, I wouldn’t be asking for more !\n" << std::endl;
}

void	Harl::warning( void){
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void){
	std::cout << "[ERROR]\nThis is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain( std::string level){
	void	(Harl::*f)(void);
	int		j = -1;
	
	for (int i = 0; i < NB_FUNC; i++){
	 	if (level == _funcTab[i].level){
			j = i;
	 		break ;
	 	}
	}				
	switch (j){
		case 0:
			f = _funcTab[j++].function;
			(this->*f)();
			//fall through
		case 1:
			f = _funcTab[j++].function;
			(this->*f)();
			//fall through
		case 2:
			f = _funcTab[j++].function;
			(this->*f)();
			//fall through
		case 3:
			f = _funcTab[j].function;
			(this->*f)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

t_func	Harl::_funcTab[NB_FUNC] = {{"DEBUG" , &Harl::debug}, {"INFO", &Harl::info}, {"WARNING", &Harl::warning}, {"ERROR", &Harl::error}};

