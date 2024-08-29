/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:45:41 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/08/29 12:18:53 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

Account::Account( int initial_deposit): _accountIndex(Account::_nbAccounts), _amount(initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

// Fonctions non membres
int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){

	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	
	time_t		now = time(NULL);
	struct tm	*local_time = localtime(&now);

	std::cout	<< "[" 
				<< 1900 + local_time->tm_year 
				<< std::setw(2) << std::setfill('0') << local_time->tm_mon 
				<< std::setw(2) << std::setfill('0') << local_time->tm_mday 
				<< "_" 
				<< std::setw(2) << std::setfill('0') << local_time->tm_hour 
				<< std::setw(2) << std::setfill('0') << local_time->tm_min 
				<< std::setw(2) << std::setfill('0') << local_time->tm_sec 
				<<  "] ";
}

// Fonctions membres
void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout	<< "index:" 
		<< this->_accountIndex 
		<< ";p_amount:" 
		<< this->_amount 
		<< ";deposit:" 
		<< deposit; 
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout	<< ";amount:" 
		<< this->_amount 
		<< ";nb_deposits:" 
		<< this->_nbDeposits 
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout	<< "index:" 
		<< this->_accountIndex 
		<< ";p_amount:" 
		<< this->_amount 
		<< ";withdrawal:"; 
	if (this->_amount >= withdrawal){
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout	<< withdrawal
			<< ";amount:" 
			<< this->_amount 
			<< ";nb_withdrawals:" 
			<< this->_nbWithdrawals 
			<< std::endl;
		return (1);
	}
	else{
		std::cout << "refused" << std::endl;
		return (0);
	}
}

int		Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout	<< "index:" 
		<< this->_accountIndex 
		<< ";amount:" 
		<< this->_amount 
		<< ";deposits:" 
		<< this->_nbDeposits 
		<< ";withdrawals:" 
		<< this->_nbWithdrawals 
		<< std::endl;
}

// Initialisation variable non membre

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
