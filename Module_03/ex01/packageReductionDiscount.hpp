#ifndef PACKAGEREDUCTIONDISCOUNT_HPP
# define PACKAGEREDUCTIONDISCOUNT_HPP

# include "command.hpp"

class packageReductionDiscount : public Command
{
	public :
		packageReductionDiscount(std::string day) : Command(day) {;}
		~packageReductionDiscount(void) {;}

		virtual float	 get_total_price() {
			float	totalPrice;
			
			totalPrice = Command::get_total_price();
			if (totalPrice > 150)
			{
				totalPrice -= 10;
				std::cout << "packageReductionDiscount was performed" << std::endl;
			}
			return (totalPrice);
		}
};

# endif