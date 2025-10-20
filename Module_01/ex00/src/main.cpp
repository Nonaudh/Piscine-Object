#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Workshop.hpp"

int main(void)
{
	Worker Bob;
	// Worker Pedro;

	Workshop	ws1;
	// Workshop	ws2;

	// Shovel shovel;

	// shovel.givenToWorker(Bob);
	// shovel.givenToWorker(Pedro);
	// shovel.takenFromOwner();

	Bob.requestRegister(ws1);

	ws1.executeWorkDay();

	Bob.requestRelease(ws1);

	ws1.executeWorkDay();

	Bob.requestRelease(ws1);
}