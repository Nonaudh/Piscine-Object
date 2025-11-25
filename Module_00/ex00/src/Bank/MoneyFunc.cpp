#include "DivideAndRule.hpp"

void	Bank::bankTakeFivePercent(int &amount)
{
	int	fivePercent = amount * 0.05;

	this->addLiquidity(fivePercent);

	amount -= fivePercent;
}

void	Bank::bankTransfer(int value, int id)
{
	std::map<int, Bank::Account *>::iterator it  = this->clientAccounts.find(id);

	if (it == this->clientAccounts.end())
		throw (std::runtime_error("Account does not exist"));
	
	bankTakeFivePercent(value);

	it->second->value += value;

	std::cout << "Account " << id << " got a bank transfer of " << value << "$" << std::endl;
}

void	Bank::giveLoan(int amount, int id)
{
	 std::map<int, Bank::Account *>::iterator it  = this->clientAccounts.find(id);
	 
	 if (it == this->clientAccounts.end())
		throw (std::runtime_error("Account does not exist"));

	 if (it->second->getValue() <= 0)
		throw (std::runtime_error("Not enough money to get a loan"));

	 if (amount > this->liquidity)
	 	throw (std::runtime_error("Not enough liquidity in the Bank"));

	 this->liquidity -= amount;
	 it->second->value += amount;
	 it->second->debt += (amount * 1.05);

	 std::cout << "A loan was given to Account " << id << " of " << amount << "$" << std::endl;
}

void	Bank::AccountNeedToPay(std::map<int, Bank::Account *>::iterator& it, int amount)
{
	if (it->second->getValue() >= amount)
	{
		it->second->value -= amount;
		it->second->debt -= amount;

		if (it->second->getDebt())
			std::cout << "Account " << it->second->getId() << " pay back " << amount << "$" << std::endl;
		else
			std::cout << "Account " << it->second->getId() << " repay is debt" << std::endl;
	}
	else
		throw (std::runtime_error("Not enough money to pay the rent"));
}

void	Bank::loanPayement(int amount)
{
	std::map<int, Bank::Account *>::iterator it;

	for (it = this->clientAccounts.begin(); it != this->clientAccounts.end(); ++it)
	{
		if (it->second->debt > 0)
		{
			if (it->second->debt > amount)
			{
				AccountNeedToPay(it, amount);
			}
			else
			{
				AccountNeedToPay(it, it->second->getDebt());
			}
		}
	}
}
