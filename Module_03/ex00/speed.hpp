#ifndef SPEED_HPP
# define SPEED_HPP

class	Speed
{
	private :
		int	actualSpeed;
		// Engine	*engine;

	public :

		Speed(void) : actualSpeed(0) {;}
		~Speed(void) {;}

		void	accelerate(int amount) {
			this->actualSpeed += amount;
			if (this->actualSpeed < 0)
				this->actualSpeed = 0;
			std::cout << "Car is now at " << this->actualSpeed << " speed" << std::endl;
		}

		int	getSpeed(void) {
			return (this->actualSpeed);
		}
};

#endif