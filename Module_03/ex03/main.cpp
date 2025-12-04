#include "employeeManagement.hpp"
#include "hourlyEmployee.hpp"
#include "salariedEmployee.hpp"

void	launchMonth(EmployeeManager& Mana)
{
	for (int i = 0; i < 4; ++i)  // 4 weeks
		for (int i = 0; i < 5; ++i) // 5 days
			Mana.executeWorkday();

	Mana.calculatePayroll();
}

int	main(void)
{
	Employee marc("Marc");
	Employee leon("Leon");
	TempWorker julien("Julien");
	Apprentice pedro("Pedro");

	EmployeeManager Mana;

	Mana.addEmployee(&marc);
	Mana.addEmployee(&julien);
	Mana.addEmployee(&leon);
	Mana.addEmployee(&pedro);

	Mana.removeEmployee(&leon);

	pedro.schoolPeriod(0, 3);
	pedro.hourOff(4);

	julien.registerWorkHour(15);
	julien.mobilise(0, 3);

	launchMonth(Mana);

}