/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:45:41 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/23 15:28:14 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

Account::Account( int initial_deposit) //TODO : initialization list
{

}

Account::~Account( void ){
	std::cout << "closed" << std::endl;	
}

// Fonctions non membres
int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_nbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_nbWithdrawals);
}

void	Account::displayAccountsInfos( void ){

	_displayTimestamp();
	std::cout << "account:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	
	time_t		now = time(NULL);
	struct tm	*local_time = localtime(&now);

	std::cout << std::put_time(local_time, "[%G%m%d_%H%M%S] ");
}

// Fonctions membres
void	Account::makeDeposit( int deposit ){//TODO

}

bool	Account::makeWithdrawal( int withdrawal ){//TODO

}

int		Account::checkAmount( void ) const{//TODO

}

void	Account::displayStatus( void ) const{//TODO

}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
