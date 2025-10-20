#ifndef WORKER_HPP
# define WORKER_HPP

# include "Position.hpp"
# include "Statistic.hpp"
# include <list>

class	Tool;
class	Workshop;

class	Worker
{
	private :
		Position	coordonnee;
		Statistic	stat;
		std::list<Tool *> tools;

	public :
		Worker(void);
		~Worker(void);

		void	addTool(Tool *tool);
		int		rmTool(Tool *tool);

		int	requestRegister(Workshop &workshop);
		int	requestRelease(Workshop &workshop);

		void	work(void);
};

#endif
