#include "DivideAndRule.hpp"

// BANK

Bank::Bank(int liquidity) : liquidity(liquidity)
{}

Bank::~Bank(void)
{
	std::map<int, Bank::Account *> clientAccounts = this->getClientAccounts();

	for (	std::map<int, Bank::Account *>::iterator it = clientAccounts.begin();
			it != clientAccounts.end(); ++it)
		delete(it->second);
}

int	Bank::findId(const std::map<int, Bank::Account *> &clientAccounts)
{
	int	id = 0;

	for (	std::map<int, Bank::Account *>::const_iterator it = clientAccounts.begin();
			it != clientAccounts.end() && id == it->first; ++it, ++id)
		;
	return (id);
}

int	bankPercentage(int &value, Bank &bank)
{
	int	fivePercent = value * 0.05;

	bank.addLiquidity(fivePercent);

	return (value -= fivePercent);
}

void	Bank::createAccount(int value_tmp)
{
	int value = bankPercentage(value_tmp, *this);

	Account *newAccount = new Account(findId(this->clientAccounts), value);

	this->clientAccounts.insert(std::pair<int, Account *>(newAccount->getId(), newAccount));
}

void	Bank::deleteAccount(const int &id)
{
	std::map<int, Bank::Account *>::iterator it = this->clientAccounts.find(id);

	if (it != this->clientAccounts.end())
	{
		delete (it->second);
		this->clientAccounts.erase(it);
	}
	else
		std::cout << "Account " << id << " does not exist" << std::endl;
}

void	Bank::giveLoan(int value, int id)
{
	 std::map<int, Bank::Account *>::iterator it  = this->clientAccounts.find(id);
	 
	 if (it == this->clientAccounts.end())
	 {
		std::cout << "Account " << id << " does not exist" << std::endl;
		return ;
	 }
	 if (value > this->liquidity)
	 {
		std::cout << "Not enough liquidity in the Bank" << std::endl;
		return ;
	 }
	 
}

std::ostream& operator << (std::ostream& p_os, const Bank &p_bank)
{
	std::map<int, Bank::Account *> clientAccounts = p_bank.getClientAccounts();

	p_os << "Bank informations : " << std::endl;
	p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;

	for (	std::map<int, Bank::Account *>::const_iterator it = clientAccounts.begin();
			it != clientAccounts.end(); ++it)
		p_os << "Client " << it->first << " has " << it->second->getvalue() << " $" << std::endl;

	return (p_os);
}

// const Account	&operator [] (const int &id)
// {

// }

// ACCOUNT

// std::ostream& operator << (std::ostream& p_os, const Bank::Account& p_account)
// {
// 	p_os << "[" << p_account.getId() << "] - [" << p_account.getvalue() << "]";
// 	return (p_os);
// }
