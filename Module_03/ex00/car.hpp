#ifndef CAR_HPP
# define CAR_HPP

# include "engine.hpp"
# include "transmission.hpp"
# include "speed.hpp"
# include "wheel.hpp"
# include "brake.hpp"

class	Car
{
	private :
		Tranmission	transmission;
		Speed	speed;
		Wheel	wheel;
		Brake	brake;
		Engine	engine;

	public :
		Car(void) : brake(speed), engine(brake) {;}
		~Car(void) {;}

		// engine
		void	start(void) {
			engine.start();
		}

		void	stop(void) {
			engine.stop();
		}

		// speed
		void	accelerate(int amount) {
			if (engine.isStoped())
				return ;
			speed.accelerate(amount);
		}

		// transmission
		void	shift_gears_up(void) {
			transmission.shift_gears_up();
		}

		void	shift_gears_down(void) {
			transmission.shift_gears_down();
		}

		void	reverse(void) {
			transmission.reverse();
		}

		//wheel
		void	turn_wheel(int angle) {
			wheel.turn_wheel(angle);
		}

		void straighten_wheels(void) {
			wheel.straighten_wheels();
		}
		
		// brake
		void	apply_force_on_brakes(int force) {
			brake.apply_force_on_brakes(force);
		}
		void	apply_emergency_brakes(void) {
			brake.apply_emergency_brakes();
		}
};

#endif