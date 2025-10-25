#ifndef TRANSMISSION_HPP
# define TRANSMISSION_HPP

# include <iostream>

class	Tranmission
{
	private :
		int actualGear;

	public :
		Tranmission(void) : actualGear(0) {;}
		~Tranmission(void) {;}

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
};

#endif