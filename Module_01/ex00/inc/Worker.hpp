#ifndef WORKER_HPP
# define WORKER_HPP

# include "Position.hpp"
# include "Statistic.hpp"
// # include "Workshop.hpp"
# include <list>

class	Tool;

template <typename ToolNeeded>
class	Workshop;

class	Worker
{
	private :
		Position	coordonnee;
		Statistic	stat;
		std::list<Tool *> tools;
		// template <typename ToolNeeded>
		// std::list<void *> WorkPlaces;

	public :
		Worker(void);
		~Worker(void);

		void	addTool(Tool *tool);
		int		rmTool(Tool *tool);

		template <typename T>
		T *getTool(void);

		template <typename Tool>
		int	requestRegister(Workshop<Tool> &workshop);
		template <typename Tool>
		int	requestRelease(Workshop<Tool> &workshop);

		void	work(void);
};

# include "Worker.tpp"

#endif
