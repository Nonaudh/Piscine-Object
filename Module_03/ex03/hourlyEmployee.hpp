#ifndef HOURLYEMPLOYEE_HPP
# define HOURLYEMPLOYEE_HPP

# include "employee.hpp"

class	TempWorker : public Employee
{
	public :
		TempWorker(std::string name) : Employee(name) {
			for (int i = 0; i < 7; ++i)
				this->schedule[i] = 0;
		}
		~TempWorker(void) {;}

		int	registerWorkHour(int hour) {
			if (hour < 0 || hour > 6)
			{
				std::cout << "Not a legal hour" << std::endl;
				return (1);
			}
			this->schedule[hour] = 1;
			return (0);
		}

		int	mobilise(int start, int duration) {
			if (start < 0 || start + duration > 6)
			{
				std::cout << "Not a legal hour" << std::endl;
				return (1);
			}
			for (int i = start; i <= start + duration; ++i)
				this->schedule[i] = 1;
			return (0);
		}
};

#endif