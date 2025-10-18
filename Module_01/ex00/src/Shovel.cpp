#include "Shovel.hpp"
#include "Worker.hpp"

Shovel::Shovel(void)
{
	std::cout << "Shovel Constructor" << std::endl;

	this->numberOfUses = 0;
	this->owner = NULL;
}

Shovel::~Shovel(void)
{
	std::cout << "Shovel Destructor" << std::endl;
}

void	Shovel::use(void)
{
	std::cout << "Shovel is used" << std::endl;
}

void	Shovel::givenToWorker(Worker &worker)
{
	if (this->owner == &worker)
		return;
		
	if (this->owner != NULL)
		this->takenFromWorker();

	this->owner = &worker;
	this->owner->setShovel(this);

	std::cout << "Shovel is given to a Worker" << std::endl;
}

void	Shovel::takenFromWorker(void)
{
	this->owner->setShovel(NULL);
	this->owner = NULL;

	std::cout << "Shovel is taken away from a Worker" << std::endl;
}

