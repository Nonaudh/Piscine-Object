#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include <iostream>
# include "Tool.hpp"

class	Worker;

class	Shovel : public Tool
{
	public :
		Shovel(void);
		~Shovel(void);
		void	use(void);
		void	givenToWorker(Worker &worker);
		void	takenFromWorker(void);
};

#endif
