#include "DivideAndRule.hpp"

Bank::Bank(int liquidity) : liquidity(liquidity)
{}

Bank::~Bank(void)
{
	std::map<int, Bank::Account *> clientAccounts = this->getClientAccounts();

	for (	std::map<int, Bank::Account *>::iterator it = clientAccounts.begin();
			it != clientAccounts.end(); ++it)
		delete(it->second);
}
