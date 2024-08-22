/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:45:41 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/22 16:23:12 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit) //TODO : initialization list
{

}

Account::~Account( void ){
	std::cout << "closed" << std::endl;	
}

// Fonctions non membres
int	getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	getNbDeposits( void ){

	return (Account::_nbDeposits);
}

int	getNbWithdrawals( void ){

	return (Account::_nbWithdrawals);
}

void	displayAccountsInfos( void ){
//TODO
}


// Fonctions membres
void	Account::makeDeposit( int deposit ){

}

bool	Account::makeWithdrawal( int withdrawal ){

}

int		Account::checkAmount( void ) const{

}

void	Account::displayStatus( void ) const{

}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
