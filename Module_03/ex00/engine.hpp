#ifndef ENGINE_HPP
# define ENGINE_HPP

# include <iostream>

class	Engine
{
	private :
		bool	on;

	public :
		Engine(void) : on(0) {;}
		~Engine(void) {;}

		void	start(void) {
			this->on = 1;
			std::cout << "Engine started" << std::endl;
		}

		void	stop(void) {
			this->on = 0;
			// add apply brake
			std::cout << "Engine stopped" << std::endl;
		}
	};

#endif