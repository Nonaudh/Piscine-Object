#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include "shape.hpp"

class	Triangle : public Shape
{
	private :
		float	a;
		float	b;
		float	c;

	public :
		Triangle(float a, float b, float c) : Shape() {
			if (a + b <= c || a + c <= b || b + c <= a)
				throw std::runtime_error("Impossible Triangle");
			
			this->a = a;
			this->b = b;
			this->c = c;
		}
		~Triangle(void) {;}

		float	area(void) {
			float s = (this->a + this->b + this->c) / 2.0;
			float area = std::sqrt(s * (s - this->a) * (s - this->b) * (s - this->c));

			return (area);
		}
		float	perimeter(void) {
			return (this->a + this->b + this->c);
		}
};


#endif