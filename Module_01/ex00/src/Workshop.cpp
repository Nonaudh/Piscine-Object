#include "Workshop.hpp"
#include "Worker.hpp"


Workshop::Workshop()
{
	std::cout << "Workshop Constructor" << std::endl;
}

Workshop::~Workshop()
{
	std::cout << "Workshop Destructor" << std::endl;
}


int	Workshop::registerWorker(Worker *worker)
{
	std::list<Worker *>::iterator	it;

	for (it = this->registered.begin(); it != this->registered.end(); ++it)
	{
		if (*it == worker)
			break;
	}
	if (it != this->registered.end())
		return (1);
	this->registered.push_back(worker);
	std::cout << "Workshop registered a Worker" << std::endl;
	return (0);
}

int	Workshop::releaseWorker(Worker *worker)
{
	std::list<Worker *>::iterator	it;

	for (it = this->registered.begin(); it != this->registered.end(); ++it)
	{
		if (*it == worker)
		{
			this->registered.erase(it);
			break;
		}
	}
	if (it == this->registered.end())
		return (1);
	std::cout << "Workshop released a Worker" << std::endl;
	return (0);
}

void	Workshop::executeWorkDay(void)
{
	std::list<Worker *>::iterator	it;

	std::cout << "Workshop lauch his day" << std::endl;

	for (it = this->registered.begin(); it != this->registered.end(); ++it)
		(*it)->work();
}
