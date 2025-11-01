#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP

# include <string>

class	Employee
{
	protected :
		int	hourlyValue;
		std::string	name;

	public :
		Employee(std::string name) {
			this->name = name;
		}
		~Employee(void) {;}

		std::string&	getName(void) {
			return (this->name);
		}

		int	executeWorkday(void) {
			;
		}
};

#endif