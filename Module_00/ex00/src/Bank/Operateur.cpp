#include "DivideAndRule.hpp"

std::ostream& operator << (std::ostream& p_os, const Bank &p_bank)
{
	std::map<int, Bank::Account *> clientAccounts = p_bank.getClientAccounts();

	p_os << "Bank informations : " << std::endl;
	p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;

	for (	std::map<int, Bank::Account *>::const_iterator it = clientAccounts.begin();
			it != clientAccounts.end(); ++it)
		p_os << "Client " << it->first << " has " << it->second->getValue() << " $" << " and " << it->second->getDebt() << " $ debt " <<  std::endl;

	return (p_os);
}

const Bank::Account	&Bank::operator [] (const int &id)
{
	std::map<int, Bank::Account *>::iterator	it = this->clientAccounts.find(id);

	if (it != this->clientAccounts.end())
		return (*(it->second));

	throw std::runtime_error("operator [] Out Of Bound");
}

std::ostream& operator << (std::ostream& p_os, const Bank::Account& p_account)
{
	p_os << "Client " << p_account.getId() << " has " << p_account.getValue() << " $" << " and " << p_account.getDebt() << " $ debt " <<  std::endl;

	return (p_os);
}
