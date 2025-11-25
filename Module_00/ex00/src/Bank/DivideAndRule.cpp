#include "DivideAndRule.hpp"

Bank::Bank(int liquidity) : liquidity(liquidity)
{
	std::cout << "A bank appeared with " << liquidity << "$" << std::endl;
}

Bank::~Bank(void)
{
	std::map<int, Bank::Account *> clientAccounts = this->getClientAccounts();

	for (	std::map<int, Bank::Account *>::iterator it = clientAccounts.begin();
			it != clientAccounts.end(); ++it)
		delete(it->second);
}
