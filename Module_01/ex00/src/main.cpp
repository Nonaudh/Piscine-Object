#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

int main(void)
{
	Worker Bob;
	Worker Pedro;

	Hammer shovel;

	shovel.givenToWorker(Bob);
	shovel.givenToWorker(Pedro);
	shovel.takenFromOwner();
}