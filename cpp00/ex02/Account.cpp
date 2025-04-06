#include <vector>
#include <ctime>
#include <algorithm>
#include <functional>
#include "./Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
  std::time_t rawtime;
  std::tm* timeinfo;
  char buffer[80];

  std::time(&rawtime);
  timeinfo = std::localtime(&rawtime);

  std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
  std::cout << buffer ;
}

int Account::getNbAccounts(void)
{
  return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
  return (_totalAmount);
}

int Account::getNbDeposits(void)
{
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
  _displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
  this->_amount += deposit;
  _totalAmount += deposit;
  this->_nbDeposits++;
  _totalNbDeposits++;
  std::cout << ";amount:"<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
  _displayTimestamp();
  if (withdrawal > this->_amount)
  {
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused\n";
    return (false);
  }
  else
  {
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
  }
}

int		checkAmount( void )
{
  return (0);
}

void	Account::displayStatus( void ) const
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
  static int index = 0;
  _displayTimestamp();
  this->_accountIndex = index++;
  this->_amount = initial_deposit;
  this->_nbDeposits = 0; 
  this->_nbWithdrawals = 0; 
  this->_nbAccounts++;
  this->_totalAmount += initial_deposit;
  this->_totalNbDeposits = 0;
  this->_totalNbWithdrawals = 0;
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::~Account()
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}
