#ifndef PACKAGEREDUCTIONDISCOUNT_HPP
# define PACKAGEREDUCTIONDISCOUNT_HPP

# include "command.hpp"

class packageReductionDiscount : public Command
{
	public :
		packageReductionDiscount(std::string client) : Command(client) {;}
		~packageReductionDiscount(void) {;}

		virtual float	 get_total_price() {
			float	totalPrice;
			
			totalPrice = Command::get_total_price() * ;
		}
};

# endif