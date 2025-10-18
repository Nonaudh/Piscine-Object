#ifndef WORKER_HPP
# define WORKER_HPP

# include "Position.hpp"
# include "Statistic.hpp"
# include <vector>

class	Tool;

class	Worker
{
	private :
		Position	coordonnee;
		Statistic	stat;
		std::vector<Tool *> tools;

	public :
		Worker(void);
		~Worker(void);

		// Shovel	*getShovel(void) const;
		void	addTool(Tool *tool);
};

#endif
