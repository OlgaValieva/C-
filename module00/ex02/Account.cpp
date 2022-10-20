/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:24 by carys             #+#    #+#             */
/*   Updated: 2022/10/20 13:15:58 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>   
#include <ctime>
#include "Account.hpp"

//init
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals= 0;

//getter
int	Account::getNbAccounts( void ){return (_nbAccounts);}
int	Account::getTotalAmount( void ){return (_totalAmount);}
int	Account::getNbDeposits( void ){return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals);}
int	Account::checkAmount( void ) const {return (_amount);}

//displayTimestamp
void	Account::_displayTimestamp(void)
{
    std::time_t t = std::time(0);
    std::tm *l = std::localtime(&t);
    std::cout << "[" << l->tm_year + 1900 << l->tm_mon + 1 << l->tm_mday << "_"
    << l->tm_hour << l->tm_min << l->tm_sec << "] ";
}

//constructor index:0;amount:42;created
Account::Account ()
{
    Account::_displayTimestamp();
    _accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += _amount;
    std::cout << "index:" <<_accountIndex << ";amount:" << _amount << ";created" << std::endl;
    
}
Account::Account (int initial_deposit)
{
    Account::_displayTimestamp();
    _accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += _amount;
    std::cout << "index:" <<_accountIndex << ";amount:" << _amount << ";created" << std::endl;
    
}

//destructor
Account::~Account ()
{
    Account::_displayTimestamp();
    std::cout << "index:" <<_accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

//displayAccountsInfos accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" <<_nbAccounts << ";total:" <<_totalAmount << ";deposits:" << _totalNbDeposits
    << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

//displayStatus

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
    << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//makeDeposit  index:0;amount:42;deposits:0;withdrawals:0
void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" <<_accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit;
	_amount += deposit;
	_nbDeposits++;
    _totalAmount += deposit;
	_totalNbDeposits++;
    std::cout << ";amount:" <<_amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

//makeWithdrawal

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount - withdrawal >= 0)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    else
        std::cout << "refused" << std::endl;
    return (false); 
}