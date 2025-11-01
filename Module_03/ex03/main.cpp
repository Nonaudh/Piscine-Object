#include "employeeManagement.hpp"

int	main(void)
{
	Employee marc("Marc");
	Employee julien("Julien");
	Employee pedro("Pedro");

	EmployeeManager Mana;

	Mana.addEmployee(&marc);
	Mana.addEmployee(&julien);
	Mana.addEmployee(&pedro);

	Mana.removeEmployee(&julien);
	Mana.print();
}