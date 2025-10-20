#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

#include <iostream>
#include <list>

class	Worker;

class	Workshop
{
	private :
		std::list<Worker *>	registered;

	public :
		Workshop();
		~Workshop();

		int	registerWorker(Worker *worker);
		int	releaseWorker(Worker *worker);

		void	executeWorkDay(void);
};

#endif