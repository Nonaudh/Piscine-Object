#ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "shape.hpp"

class	Circle : public Shape
{
	private :
		float	r;

	public :
		Circle(float r) : Shape() {
			if (r < 0)
				throw std::runtime_error("Impossible Circle");
			this->r = r;
		}
		~Circle(void) {;}

		float	area(void) {
			return (M_PI * pow(this->r, 2));
		}
		float	perimeter(void) {
			return (2 * M_PI * this->r);
		}
};

#endif