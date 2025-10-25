#ifndef CAR_HPP
# define CAR_HPP

# include "engine.hpp"
# include "transmission.hpp"
# include "motor.hpp"

class	Car
{
	private :
		Engine	engine;
		Tranmission	transmission;
		Motor	motor;

	public :
		void	start(void) {
			engine.start();
		}

		void	stop(void) {
			engine.stop();
		}


		void	shift_gears_up(void) {
			transmission.shift_gears_up();
		}

		void	shift_gears_down(void) {
			transmission.shift_gears_down();
		}

		void	reverse(void) {
			transmission.reverse();
		}
};

#endif