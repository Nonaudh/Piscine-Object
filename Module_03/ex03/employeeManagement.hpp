#ifndef EMPLOYEEMANAGEMENT_HPP
# define EMPLOYEEMANAGEMENT_HPP

# include <iostream>
# include <set>
# include "employee.hpp"

class	EmployeeManager
{
	private :
		std::set<Employee *> employees;

	public :
		EmployeeManager(void) {;}
		~EmployeeManager(void) {;}

		void	addEmployee(Employee *ptr) {
			employees.insert(ptr);
		}

		void	removeEmployee(Employee *ptr) {
			employees.erase(ptr);
		}

		void	print(void) {
			for (std::set<Employee *>::iterator it = employees.begin();
					it != employees.end(); ++it)
					std::cout << (*it)->getName() << std::endl;
		}
};

#endif