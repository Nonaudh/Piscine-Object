#ifndef SALARIEDEMPLOYEE_HPP
# define SALARIEDEMPLOYEE_HPP

# include "employee.hpp"

class	ContractEmployee : public Employee
{
	public :
		ContractEmployee(std::string name) : Employee(name) {;}
		~ContractEmployee(void) {;}

		int	hourOff(int hour) {
			if (hour < 0 || hour > 6)
			{
				std::cout << "Not a working hour" << std::endl;
				return (1);
			}
			this->schedule[hour] = 0;
			return (0);
		}
};

class	Apprentice : public ContractEmployee
{
	public :
		Apprentice(std::string name) : ContractEmployee(name) {;}
		~Apprentice(void) {;}

		int	schoolHour(int hour) {
			if (hour < 0 || hour > 6)
			{
				std::cout << "Not a working hour" << std::endl;
				return (1);
			}
			this->schedule[hour] = 2;
			return (0);
		}

		int	schoolPeriod(int start, int duration) {
			if (start < 0 || start + duration > 6)
			{
				std::cout << "Not a legal hour" << std::endl;
				return (1);
			}
			for (int i = start; i <= start + duration; ++i)
				this->schedule[i] = 2;
			return (0);
		}

		int	executeWorkday(void) {
			for (int i = 0; i < 7; ++i)
			{
				if (this->schedule[i] == 1)
					hourDone++;
				if (this->schedule[i] == 2)
					hourDone += 0.5;
			}
			return (0);
		}
};

#endif