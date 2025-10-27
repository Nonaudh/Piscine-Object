#ifndef WHEEL_HPP
# define WHEEL_HPP

#include <iostream>

class	Wheel
{
	private :
		int	wAngle;

	public :
		Wheel(void) : wAngle(0) {;}
		~Wheel(void) {;}

		void	turn_wheel(int angle) {
			this->wAngle += angle;
			std::cout << "wheels are now at " << wAngle << " degre" << std::endl;
		}

		void straighten_wheels(void) {
			this->wAngle = 0;
			std::cout << "wheels are back to a straight-ahead position" << std::endl;
		}
};

#endif