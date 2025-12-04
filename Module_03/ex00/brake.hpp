#ifndef BRAKE_HPP
# define BRAKE_HPP

#include "speed.hpp"

class	Brake
{
	private :
		Speed *speed;

	public :
		Brake(Speed &speedRef) : speed(&speedRef) {;}

	void	apply_force_on_brakes(int force) {
		std::cout << force << " amount of brake was apply" << std::endl;
		if (force > speed->getSpeed())
			force = speed->getSpeed();
		speed->accelerate(- force);
	}

	void	apply_emergency_brakes(void) {
		std::cout << "maximum force was apply on the brake" << std::endl;
		speed->stop();
	}
};

#endif