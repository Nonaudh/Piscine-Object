#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP

# include <string>
# include <iostream>

class	Employee
{
	protected :
		int	hourlyValue;
		float	hourDone;
		int	schedule[7];
		std::string	name;

	public :
		Employee(std::string name) {
			this->name = name;
			this->hourlyValue = 10;
			this->hourDone = 0;
			for (int i = 0; i < 7; ++i)
				this->schedule[i] = 1;
		}
		virtual ~Employee(void) {;}

		std::string&	getName(void) {
			return (this->name);
		}

		float	paymentDay(void) {
			float	toPay = this->hourDone * this->hourlyValue;
			this->hourDone = 0;
			return (toPay);
		}

		virtual int	executeWorkday(void) {
			for (int i = 0; i < 7; ++i)
			{
				if (this->schedule[i])
					hourDone++;
			}
			return (0);
		}
};

#endif