#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "shape.hpp"

class	Rectangle : public Shape
{
	private :
		float	a;
		float	b;

	public :
		Rectangle(float a, float b) : Shape() {
			if (a < 0 || b < 0)
				throw std::runtime_error("Impossible Rectangle");
			this->a = a;
			this->b = b;
		}
		~Rectangle(void) {;}

		float	area(void) {
			return (a * b);
		}
		float	perimeter(void) {
			return ((a + b) * 2);
		}
};

#endif