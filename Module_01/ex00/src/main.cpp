#include "Workshop.hpp"
#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

int main(void)
{
	Worker Bob;
	Worker Pedro;

	Workshop<Shovel>	shop;

	Shovel shovel;
	Hammer hammer;
	// Tool tool;

	std::cout << std::endl;

	shovel.givenToWorker(Bob);

	shovel.givenToWorker(Pedro);

	hammer.givenToWorker(Pedro);

	Pedro.requestRegister(shop);

	Bob.requestRegister(shop);

	shop.executeWorkDay();

	Pedro.requestRelease(shop);

	shop.executeWorkDay();

	std::cout << std::endl;

}