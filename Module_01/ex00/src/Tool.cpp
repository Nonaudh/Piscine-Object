#include "Tool.hpp"
#include "Worker.hpp"

Tool::Tool(void)
{
	std::cout << "Tool Constructor" << std::endl;

	this->numberOfUses = 0;
}

Tool::~Tool(void)
{
	std::cout << "Tool Destructor" << std::endl;
}

void	Tool::givenToWorker(Worker &worker)
{
	if (&worker == this->owner)
		return ;
	this->takenFromOwner();
	worker.addTool(this);
	this->owner = &worker;
	std::cout << "Tool was given to a Worker" << std::endl;
}

void	Tool::takenFromOwner(void)
{
	if (this->owner)
	{
		if (this->owner->rmTool(this))
			std::cout << "error rmTool" << std::endl;
		this->owner = NULL;
		std::cout << "Tool was taken away from a Worker" << std::endl;
	}
}
