#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_totalAmount += initial_deposit;
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount += initial_deposit;
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
}
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<  ";total:"
	<< _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal > _amount || withdrawal <= 0)
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << "refused";
		std::cout << std::endl;
		return (false);
	}
	else
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		std::cout << ";amount:" << _amount;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
}
int		Account::checkAmount( void ) const
{
	return (_amount);	
}
void	Account::displayStatus( void ) const
{
	int	temp;

	temp = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t timestamp;
	time(&timestamp);
	std::tm *now = std::localtime(&timestamp);
	timestamp /= (60 * 60);
	std::cout
	<< "[" 
	<< now->tm_year + 1900
	<< std::setw(2) << std::setfill('0') << now->tm_mon 
	<< std::setw(2) << std::setfill('0') << now->tm_mday 
	<< "_"
	<< std::setw(2) << std::setfill('0') << now->tm_hour
	<< std::setw(2) << std::setfill('0') << now->tm_min
	<< std::setw(2) << std::setfill('0') << now->tm_sec
	<< "] ";
}