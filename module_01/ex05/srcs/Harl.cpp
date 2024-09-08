/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:48:44 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/09 00:07:34 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
//	this->tab = {{"debug" , &Harl::debug}, {"info", &Harl::info}};
	std::cout << "Lancement Harl 2.0" << std::endl;
	// for (int i = 0; i < NB_FUNC; i++){
	// 	std::cout << "Function " << i + 1 << " : " << (Harl::_funcTab[i]).level << std::endl;
	// }
}

void	Harl::debug( void ){
	std::cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info( void){
	std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning( void){
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void){
	std::cout << "[ ERROR ] This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level){
	void	(Harl::*f)(void);
	
	for (int i = 0; i < NB_FUNC; i++){
		if (level == _funcTab[i].level){
			f = _funcTab[i].function;
			(this->*f)();
			return ;
		}
	}				
	std::cout << "[ " << level << " ] Probably complaining about insignificant problems" << std::endl;
}

t_func	Harl::_funcTab[NB_FUNC] = {{"DEBUG" , &Harl::debug}, {"INFO", &Harl::info}, {"WARNING", &Harl::warning}, {"ERROR", &Harl::error}};

