#include "Worker.hpp"
// #include "Workshop.hpp"

template <typename ToolNeeded>
Workshop<ToolNeeded>::Workshop()
{
	std::cout << "Workshop Constructor" << std::endl;
}

template <typename ToolNeeded>
Workshop<ToolNeeded>::~Workshop()
{
	std::cout << "Workshop Destructor" << std::endl;
}

template <typename ToolNeeded>
int	Workshop<ToolNeeded>::toolMissing(Worker *worker)
{
	return (!worker->getTool<ToolNeeded>());
}

template <typename ToolNeeded>
int	Workshop<ToolNeeded>::registerWorker(Worker *worker)
{
	std::list<Worker *>::iterator	it;

	for (it = this->registered.begin(); it != this->registered.end(); ++it)
	{
		if (*it == worker)
			break;
	}
	if (it != this->registered.end())
		return (1);

	if (toolMissing(worker))
	{
		std::cout << "Doesnt have the tool needed\n"; // to clean !
		return (1);
	}

	this->registered.push_back(worker);
	std::cout << "Workshop registered a Worker" << std::endl;
	return (0);
}

template <typename ToolNeeded>
int	Workshop<ToolNeeded>::releaseWorker(Worker *worker)
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

template <typename ToolNeeded>
void	Workshop<ToolNeeded>::executeWorkDay(void)
{
	std::list<Worker *>::iterator	it;

	std::cout << "Workshop lauch his day" << std::endl;

	for (it = this->registered.begin(); it != this->registered.end(); ++it)
		(*it)->work();
}
