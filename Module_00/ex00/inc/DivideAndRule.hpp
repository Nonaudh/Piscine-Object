#ifndef DIVIDEANDRULE_HPP
# define DIVIDEANDRULE_HPP

#include <iostream>
// #include <vector>
#include <map>


struct Bank
{
	private :
		struct Account
		{
			private :
				int id;
				int value;

			public :
				Account(int id, int value)  : id(id), value(value){;}

				const int	&getId(void) const {return (this->id);}
				const int	&getvalue(void) const {return (this->value);}
		};

		int liquidity;
		std::map<int, Bank::Account *> clientAccounts;

	public :
		Bank(int liquidity);
		~Bank(void);

		const int	&getLiquidity(void) const {return (this->liquidity);}
		const std::map<int, Bank::Account *>	&getClientAccounts(void) const {return (this->clientAccounts);}

		void	addLiquidity(int amount) {this->liquidity += amount;}

		void	createAccount(int value_tmp);
		void	deleteAccount(const int &id);

		void	giveLoan(int value, int id);

		int		findId(const std::map<int, Bank::Account *> &clientAccounts);
		
		friend std::ostream& operator << (std::ostream& p_os, const Bank &p_bank);

		// friend const Account &operator [] (const int &id);
};

// std::ostream& operator << (std::ostream& p_os, const Account& p_account);

#endif