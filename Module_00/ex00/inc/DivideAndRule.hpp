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

			public :
				int id;
				int value;
				int debt;

				Account(int id, int value)  : id(id), value(value){;}

				const int	&getId(void) const {return (this->id);}
				const int	&getValue(void) const {return (this->value);}
				const int	&getDebt(void) const {return (this->debt);}
		};

		int liquidity;
		std::map<int, Bank::Account *> clientAccounts;

	public :
		Bank(int liquidity);
		~Bank(void);

		const int	&getLiquidity(void) const {return (this->liquidity);}
		const std::map<int, Bank::Account *>	&getClientAccounts(void) const {return (this->clientAccounts);}

		void	addLiquidity(int amount) {this->liquidity += amount;}

		// void	addMoney(int value, int id);

		void	createAccount(int value_tmp);
		void	deleteAccount(const int &id);

		void	giveLoan(int value, int id);

		int		nextId(const std::map<int, Bank::Account *> &clientAccounts);
		void	bankTakeFivePercent(Bank &bank, int &amount);

		void	loanPayement(int percentage);
		
		friend std::ostream& operator << (std::ostream& p_os, const Bank &p_bank);
		const Account &operator [] (const int &id);
		friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);
};


#endif