/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:48:44 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/06 17:19:51 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
//	this->tab = {{"debug" , &Harl::debug}, {"info", &Harl::info}};
	std::cout << "Lancement Harl 2.0" << std::endl;
	for (int i = 0; i < NB_FUNC; i++){
		std::cout << "Function " << i + 1 << " : " << (Harl::_funcTab[i]).level << std::endl;
	}
}

void	Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info( void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning( void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void){
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level){
	void	(Harl::*f)(void);
	
//	level = "Harl::" + level;
	std::cout << "TEST: Level : " << level << std::endl;
	for (int i = 0; i < NB_FUNC; i++){
		if (level == _funcTab[i].level){
			f = _funcTab[i].function;
			(this->*f)();
			return ;
		}
	}				
	std::cout << "TEST: Level not recognised" << std::endl;
//	f = &level;
//	(this->*f)();
}

t_func	Harl::_funcTab[] = {{"debug" , &Harl::debug}, {"info", &Harl::info}};

