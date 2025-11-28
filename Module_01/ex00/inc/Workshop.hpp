#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

#include <iostream>
#include <list>
# include "Worker.hpp"

template <typename ToolNeeded>
class	Workshop
{
	private :
		std::list<Worker *>	registered;

	public :
		Workshop();
		~Workshop();

		int	registerWorker(Worker *worker);
		int	releaseWorker(Worker *worker);

		int	toolMissing(Worker *worker);

		void	executeWorkDay(void);
};

#include "Workshop.tpp"

#endif