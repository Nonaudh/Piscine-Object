#ifndef ENGINE_HPP
# define ENGINE_HPP

# include <iostream>
# include "brake.hpp"

class	Engine
{
	private :
		bool	on;
		Brake	*brake;

	public :


		Engine(Brake &brakeRef) : on(0), brake(&brakeRef) {;}
		~Engine(void) {;}

		void	start(void) {
			this->on = 1;
			std::cout << "Engine started" << std::endl;
		}

		void	stop(void) {
			this->on = 0;
			brake->apply_emergency_brakes();
			std::cout << "Engine stopped" << std::endl;
		}

		int	isStoped(void) {
			return (!this->on);
		}
	};

#endif