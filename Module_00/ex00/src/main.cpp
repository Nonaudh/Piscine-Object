#include "DivideAndRule.hpp"

int main()
{
	// Account accountA = Account();
	// accountA.id = 0;
	// accountA.value = 100;

	// Account accountB = Account();
	// accountB.id = 1;
	// accountB.value = 100;

	// Bank bank = Bank();
	// bank.liquidity = 999;
	// bank.clientAccounts.push_back(&accountA);
	// bank.clientAccounts.push_back(&accountB);

	// bank.liquidity -= 200;
	// accountA.value += 400;

	// std::cout << "Account : " << std::endl;
	// std::cout << accountA << std::endl;
	// std::cout << accountB << std::endl;

	// std::cout << " ----- " << std::endl;

	// std::cout << "Bank : " << std::endl;
	// std::cout << bank << std::endl;

	Bank bank(500);
	

	bank.createAccount(100);
	bank.createAccount(200);
	bank.createAccount(300);
	
	std::cout << bank << std::endl;

	bank.giveLoan(100, 0);
	bank.giveLoan(1000, 1);
	std::cout << bank << std::endl;

	bank.loanPayement(10);
	std::cout << bank << std::endl;

	std::cout << bank[0] << std::endl;

	return (0);
}