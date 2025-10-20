#include "Worker.hpp"
#include "Position.hpp"
#include "Statistic.hpp"
#include "Workshop.hpp"

Worker::Worker(void)
{
	std::cout << "Worker Constructor" << std::endl;
}

Worker::~Worker(void)
{
	std::cout << "Worker Destructor" << std::endl;	
}

void	Worker::addTool(Tool *tool)
{
	this->tools.push_back(tool);
}

int	Worker::rmTool(Tool* tool)
{
	std::list<Tool *>::iterator	it;
	for (it = this->tools.begin(); it != this->tools.end(); ++it)
	{
		if (*it == tool)
		{
			this->tools.erase(it);
			break ;
		}
	}
	if (it == this->tools.end())
		return (1);
	return (0);
}

int	Worker::requestRegister(Workshop &workshop)
{
	std::cout << "Worker request to register to a Workshop" << std::endl;

	workshop.registerWorker(this);
	
	return (0);
}

int	Worker::requestRelease(Workshop &workshop)
{
	std::cout << "Worker request to be release from a Workshop" << std::endl;

	workshop.releaseWorker(this);
	
	return (0);
}

void	Worker::work(void)
{
	std::cout << "Worker is now working" << std::endl;
}
