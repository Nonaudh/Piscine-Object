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
