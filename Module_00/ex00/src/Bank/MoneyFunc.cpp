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
	 {
		std::cout << "Account " << id << " does not exist" << std::endl;
		return ;
	 }
	 if (it->second->getValue() <= 0)
	 {
		std::cout << "No loans for you" << std::endl;
		return ;
	 }
	 if (amount > this->liquidity)
	 {
		std::cout << "Not enough liquidity in the Bank" << std::endl;
		return ;
	 }
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
