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
		int	amount = speed->getSpeed() * (force / -100);
		std::cout << force << " percentage of brake was apply" << std::endl;
		speed->accelerate(amount);
	}

	void	apply_emergency_brakes(void) {
		std::cout << "maximum force was apply on the brake" << std::endl;
		speed->accelerate(speed->getSpeed() * -1);
	}
};

#endif