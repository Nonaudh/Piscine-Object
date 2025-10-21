#include "Worker.hpp"
#include "Workshop.hpp"
#include <algorithm>

template <typename T>
T *Worker::getTool(void)
{
	std::list<Tool *>::iterator	it;
	T	*ptr = NULL;

	for (it = this->tools.begin(); it != this->tools.end(); ++it)
	{
		ptr = dynamic_cast<T *>(*it);
		if (ptr)
			break ;
	}
	return (ptr);
}

template <typename ToolNeeded>
int	Worker::requestRegister(Workshop<ToolNeeded> &workshop)
{
	std::cout << "Worker request to register to a Workshop" << std::endl;

	if (workshop.registerWorker(this))
		return (1);
	// this->WorkPlaces.push_back(&workshop);
	return (0);
}

template <typename ToolNeeded>
int	Worker::requestRelease(Workshop<ToolNeeded> &workshop)
{
	std::cout << "Worker request to be release from a Workshop" << std::endl;

	workshop.releaseWorker(this);
	
	return (0);
}

