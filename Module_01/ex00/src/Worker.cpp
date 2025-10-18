#include "Worker.hpp"
#include "Position.hpp"
#include "Statistic.hpp"

Worker::Worker(void)
{
	std::cout << "Worker Constructor" << std::endl;

	// this->shovel = NULL;
}

Worker::~Worker(void)
{
	std::cout << "Worker Destructor" << std::endl;	
}

void	Worker::addTool(Tool *tool)
{
	this->tools.push_back(tool);
}

// Shovel	*Worker::getShovel(void) const
// {
// 	return (this->shovel);
// }

// void	Worker::setShovel(Shovel *shovel)
// {
// 	this->shovel = shovel;
// }
