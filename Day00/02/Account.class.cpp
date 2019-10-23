/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:36:29 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 14:46:19 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>

Account::Account( int initial_deposit )
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    
    Account::_displayTimestamp(); 
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << initial_deposit
    << ";created" << std::endl;
}

Account::~Account( void )
{
    Account::_nbAccounts -= 1;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits;
    std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << this->_amount
    << ";deposit:" << deposit;

    this->_amount += deposit;
    this->_nbDeposits += 1;

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;

    std::cout << ";amount:" << this->_amount
    << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();

    std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << this->_amount
    << ";withdrawal:";

    if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return 0;
	}
    
    std::cout << withdrawal;

    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;

    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;    

    std::cout << ";amount:" << this->_amount
    << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return 1;
}

int		Account::checkAmount( void ) const
{
    Account::_displayTimestamp();
    return this->_amount;
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals
    << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm *gmtm = gmtime(&now);

    std::cout << "[" << gmtm->tm_year + 1900
    << gmtm->tm_mon << gmtm->tm_mday << "_"
    << std::setw(2) << std::setfill('0') << gmtm->tm_hour 
    << std::setw(2) << std::setfill('0') << gmtm->tm_min 
    <<std::setw(2) << std::setfill('0') << gmtm->tm_sec
    << "] ";
/*    std::cout << "[20150406_153629]" << " "; */
}
