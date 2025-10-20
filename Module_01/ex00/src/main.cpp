#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Workshop.hpp"

int main(void)
{
	Worker Bob;
	Tool *ptr;
	// Worker Pedro;

	// Workshop	ws1;
	// Workshop	ws2;

	Hammer shovel;

	shovel.givenToWorker(Bob);

	ptr = Bob.getTool<Hammer>();
	if (ptr)
		std::cout << "Got this tool\n";
	else
		std::cout << "I dont\n";

	// shovel.givenToWorker(Pedro);
	// shovel.takenFromOwner();

	// Bob.requestRegister(ws1);

	// ws1.executeWorkDay();

	// Bob.requestRelease(ws1);

	// ws1.executeWorkDay();

	// Bob.requestRelease(ws1);
}