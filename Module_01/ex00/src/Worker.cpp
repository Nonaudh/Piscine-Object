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

// void	Worker::checkWorkshop(void)
// {
// 	std::list<void *>::iterator	it;

// 	for (it = this->WorkPlaces.begin(); it != this->WorkPlaces.end(); ++it)
// 	{
// 		std::cout << "to check\n";
// 	}
// }

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
	// checkWorkshop();
	return (0);
}

// template <typename ToolNeeded>
// int	Worker::requestRegister(Workshop<ToolNeeded> &workshop)
// {
// 	std::cout << "Worker request to register to a Workshop" << std::endl;

// 	workshop.registerWorker(this);
	
// 	return (0);
// }

// template <typename ToolNeeded>
// int	Worker::requestRelease(Workshop<ToolNeeded> &workshop)
// {
// 	std::cout << "Worker request to be release from a Workshop" << std::endl;

// 	workshop.releaseWorker(this);
	
// 	return (0);
// }

void	Worker::work(void)
{
	std::cout << "Worker is now working" << std::endl;
}
