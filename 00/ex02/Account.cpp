#include "Account.hpp"

#include <iomanip>
#include <iostream>
#include <ostream>

int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalAmount = 0;

Account::Account( int initial_deposit )
{
    time_t now = time(NULL);
    struct tm* localTime = localtime(&now);
    char buffer[80];

    this->_accountIndex = getNbAccounts();
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" <<std::endl;
}

Account::~Account( void )
{
    time_t now = time(NULL);
    struct tm* localTime = localtime(&now);
    char buffer[80];

    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer;
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" <<std::endl;
    _nbAccounts--;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

 int Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    time_t now = time(NULL);
    struct tm* localTime = localtime(&now);
    char buffer[80];

    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer;
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
                << _totalNbDeposits <<  ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    time_t now = time(NULL);
    struct tm* localTime = localtime(&now);
    char buffer[80];

    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() - deposit << ";deposit:"
                << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
    time_t now = time(NULL);
    struct tm* localTime = localtime(&now);
    char buffer[80];

    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer;
    if (this->_amount >= withdrawal)
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() + withdrawal << ";withdrawal:"
             << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:refused" << std::endl;
        return false;
    }
}

int		Account::checkAmount( void ) const
{
    return this->_amount;
}

void	Account::displayStatus( void ) const
{
    time_t now = time(NULL);
    struct tm* localTime = localtime(&now);
    char buffer[80];

    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer;
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";deposits:"
                << this->_nbDeposits <<  ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
