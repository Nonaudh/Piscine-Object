#include <iostream>
#include "rectangle.hpp"
#include "triangle.hpp"
#include "circle.hpp"

int	main(void)
{
	try
	{
		Shape *ptr = new Circle(10);
		std::cout << ptr->perimeter() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}