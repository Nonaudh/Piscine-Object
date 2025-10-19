#include "Hammer.hpp"
#include "Worker.hpp"

Hammer::Hammer(void)
{
	std::cout << "Hammer Constructor" << std::endl;

	this->numberOfUses = 0;
	this->owner = NULL;
}

Hammer::~Hammer(void)
{
	std::cout << "Hammer Destructor" << std::endl;
}

void	Hammer::use(void)
{
	std::cout << "Hammer is used" << std::endl;
}
