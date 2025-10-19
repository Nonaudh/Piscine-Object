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

int	Worker::rmTool(Tool* tool)
{
	std::vector<Tool *>::iterator	it;
	int exit_code = 1;

	for (it = this->tools.begin(); it != this->tools.end(); ++it)
	{
		if (*it == tool)
		{
			this->tools.erase(it);
			exit_code = 0;
			break ;
		}
	}
	return (exit_code);
}
