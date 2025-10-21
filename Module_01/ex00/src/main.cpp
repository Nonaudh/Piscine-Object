#include "Workshop.hpp"
#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

int main(void)
{
	Worker Bob;
	Tool *ptr;
	// Worker Pedro;

	Workshop<Shovel>	ws1;
	// Workshop	ws2;

	Shovel shovel;

	shovel.givenToWorker(Bob);

	// ptr = Bob.getTool<Hammer>();
	// if (ptr)
	// 	std::cout << "Got this tool\n";
	// else
	// 	std::cout << "I dont\n";

	// shovel.givenToWorker(Pedro);
	// shovel.takenFromOwner();

	Bob.requestRegister(ws1);

	ws1.executeWorkDay();

	shovel.takenFromOwner();

	Bob.requestRelease(ws1);

	ws1.executeWorkDay();

	// Bob.requestRelease(ws1);
}