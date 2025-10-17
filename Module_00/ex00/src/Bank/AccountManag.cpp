#include "DivideAndRule.hpp"

int	Bank::nextId(const std::map<int, Bank::Account *> &clientAccounts)
{
	int	id = 0;

	for (	std::map<int, Bank::Account *>::const_iterator it = clientAccounts.begin();
			it != clientAccounts.end() && id == it->first; ++it, ++id)
		;
	return (id);
}

void	Bank::createAccount(int amount)
{
	Account *newAccount = new Account(nextId(this->clientAccounts), 0);

	this->clientAccounts.insert(std::pair<int, Account *>(newAccount->getId(), newAccount));

	bankTakeFivePercent(*this, amount);

	newAccount->value += amount;
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
		throw (std::runtime_error("Account does not exist"));
}