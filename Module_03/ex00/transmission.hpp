#ifndef TRANSMISSION_HPP
# define TRANSMISSION_HPP

# include <iostream>

class	Transmission
{
	private :
		int actualGear;

	public :
		Transmission(void) : actualGear(0) {;}
		~Transmission(void) {;}

		void	shift_gears_up(void) {
			if (this->actualGear < 6)
			{
				this->actualGear++;
				std::cout << "gear went up to " << this->actualGear << std::endl;
			}
		}

		void	shift_gears_down(void) {
			if (this->actualGear > 0)
			{
				this->actualGear--;
				std::cout << "gear went down to " << this->actualGear << std::endl;
			}
		}

		void	reverse(void) {
			this->actualGear = -1;
			std::cout << "gear was put in reverse" << std::endl;
		}

		int	gearActualGear(void) {
			return (this->actualGear);
		}
};

#endif