#include "DivideAndRule.hpp"

// BANK

Bank::Bank(int liqui) : liquidity(liqui)
{}

int	Bank::findId(std::vector<Bank::Account *> clientAccounts)
{
	int	id = 0;

	for (	std::vector<Bank::Account *>::iterator it = clientAccounts.begin();
			it != clientAccounts.end() && id == (*it)->getId(); it++, id++)
			;
	return (id);
}

void	Bank::CreateAccount(int value)
{
	Account *newAccount = new Account(findId(this->clientAccounts), value);

	
}


std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
{
	p_os << "Bank informations : " << std::endl;
	// p_os << "Liquidity : " << p_bank.liquidity << std::endl;
	// for (auto &clientAccount : p_bank.clientAccounts)
	// p_os << *clientAccount << std::endl;
	return (p_os);
}

// ACCOUNT

Bank::Account::Account(int id, int value) : id(id), value(value)
{}

// std::ostream& operator << (std::ostream& p_os, const Bank::Account& p_account)
// {
// 	p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
// 	return (p_os);
// }
