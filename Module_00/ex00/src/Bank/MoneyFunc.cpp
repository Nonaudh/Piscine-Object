#include "DivideAndRule.hpp"

void	Bank::bankTakeFivePercent(Bank &bank, int &amount)
{
	int	fivePercent = amount * 0.05;

	bank.addLiquidity(fivePercent);

	amount -= fivePercent;
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
}

void	Bank::loanPayement(int amount)
{
	std::map<int, Bank::Account *>::iterator it;

	for (it = this->clientAccounts.begin(); it != this->clientAccounts.end(); ++it)
	{
		if (it->second->debt > 0)
		{
			if (it->second->value > amount)
			{
				if (it->second->debt > amount)
				{
					it->second->value -= amount;
	 				it->second->debt -= amount;
				}
				else
				{
					it->second->value -= it->second->debt;
	 				it->second->debt -= it->second->debt;
				}
			}
			else
				std::cout << "Not enough money to pay the rent" << std::endl;
		}
	}
}
