#ifndef MOTOR_HPP
# define MOTOR_HPP

class	Motor
{
	private :
		int	actualSpeed;

	public :
		Motor(void) : actualSpeed(0) {;}
		~Motor(void) {;}

		void	accelerate(int speed) {
			this->actualSpeed += speed;
			// add transmission relation
			// add motor relation
			std::cout << "Car is now at " << this->actualSpeed << " speed" << std::endl;
		}
};

#endif