#ifndef TOOL_HPP
# define TOOL_HPP

# include <iostream>

class	Worker;

class	Tool
{
	protected :
		int	numberOfUses;
		Worker	*owner;

	public :
		Tool(void);
		virtual ~Tool(void);
		virtual void	use(void) = 0;
		void	givenToWorker(Worker &worker);
		void	takenFromOwner(void);
};

#endif