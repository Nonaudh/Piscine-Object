#ifndef THUESDAYDISCOUNT_HPP
# define THUESDAYDISCOUNT_HPP

# include "command.hpp"

static	bool isThuesday(std::string day);

class	thuesdayDiscount : public Command
{
	public :
		thuesdayDiscount(std::string day) : Command(day) {;}
		~thuesdayDiscount() {;}

		virtual float	 get_total_price() {
			float	totalPrice;
			
			totalPrice = Command::get_total_price();
			if (isThuesday(this->date))
			{
				totalPrice *= 0.9;
				std::cout << "thuesdayDiscount was performed" << std::endl;
			}
			return (totalPrice);
		}
};

# endif