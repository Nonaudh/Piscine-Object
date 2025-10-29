#ifndef SHAPE_HPP
# define SHAPE_HPP

# include <stdexcept>
# include <cmath>

class	Shape
{
	public :
		Shape(void) {;}
		virtual ~Shape(void) {;}

		virtual float	area(void) = 0;
		virtual float	perimeter(void) = 0;
};

#endif