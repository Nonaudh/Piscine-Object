#ifndef DIVIDEANDRULE_HPP
# define DIVIDEANDRULE_HPP

#include <iostream>
#include <vector>



struct Bank
{
	private :
		struct Account
		{
			private :
				int id;
				int value;

			public :
				Account(int id, int value);
				const int	&getId(void) const {return (this->id);}
				const int	&getvalue(void) const {return (this->value);}
		};

		int liquidity;
		std::vector<Account *> clientAccounts;

	public :
		Bank(int liqui);
		~Bank(void);

		void	CreateAccount(int value);
		int		findId(std::vector<Bank::Account *> clientAccounts);


};

std::ostream& operator << (std::ostream& p_os, const Bank& p_bank);
// std::ostream& operator << (std::ostream& p_os, const Account& p_account);

#endif