#ifndef SPEED_HPP
# define SPEED_HPP

#include "transmission.hpp"

class	Speed
{
	private :
		int	actualSpeed;
		Transmission	*transmission;

	public :

		Speed(Transmission &transmissionRef) : actualSpeed(0), transmission(&transmissionRef) {;}
		~Speed(void) {;}

		void	accelerate(int amount) {
			this->actualSpeed += amount * transmission->gearActualGear();
			std::cout << "Car is now at " << this->actualSpeed << " speed" << std::endl;
		}

		void	stop(void) {
			this->actualSpeed = 0;
			std::cout << "Car is now at " << this->actualSpeed << " speed" << std::endl;
		}

		int	getSpeed(void) {
			return (this->actualSpeed);
		}
};

#endif