#include "Worker.hpp"
#include "Workshop.hpp"

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
