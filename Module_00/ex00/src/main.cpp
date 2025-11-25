#include "DivideAndRule.hpp"

int main()
{
	Bank bank(50000);
	
	try
	{
		const Bank::Account& Jean = bank.createAccount(100);

		bank.createAccount(200);
		bank.createAccount(300);

		bank.bankTransfer(200, Jean.getId());
		
		std::cout << std::endl << bank << std::endl;

		bank.giveLoan(100, Jean.getId());
		bank.giveLoan(1000, 1);

		std::cout << std::endl << bank << std::endl;

		bank.loanPayement(10);

		std::cout << std::endl <<  bank << std::endl;

		std::cout << bank[0] << std::endl;

		bank.loanPayement(1000);

		std::cout << std::endl <<  bank << std::endl;

		bank.deleteAccount(2);
		bank.deleteAccount(2);
		
		std::cout << "ok" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}