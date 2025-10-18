#ifndef HAMMER_HPP
# define HAMMER_HPP

# include <iostream>
# include "Tool.hpp"

class	Worker;

class	Hammer : public Tool
{
	public :
		Hammer(void);
		~Hammer(void);
		void	use(void);
		void	givenToWorker(Worker &worker);
		void	takenFromWorker(void);
};

#endif