#include "Worker.hpp"
#include "Shovel.hpp"

int main(void)
{
	Worker Bob;
	Worker Pedro;

	Shovel shovel;

	shovel.givenToWorker(Bob);
	shovel.givenToWorker(Pedro);
}