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

// const Account	&operator [] (const int &id)
// {

// }

// ACCOUNT

// std::ostream& operator << (std::ostream& p_os, const Bank::Account& p_account)
// {
// 	p_os << "[" << p_account.getId() << "] - [" << p_account.getValue() << "]";
// 	return (p_os);
// }