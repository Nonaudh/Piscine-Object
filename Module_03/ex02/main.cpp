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
		std::cout << ptr->area() << std::endl;
		delete (ptr);

		std::cout << std::endl;

		ptr = new Triangle(5, 5, 5);
		std::cout << ptr->perimeter() << std::endl;
		std::cout << ptr->area() << std::endl;
		delete (ptr);
		
		std::cout << std::endl;

		ptr = new Rectangle(5, 10);
		std::cout << ptr->perimeter() << std::endl;
		std::cout << ptr->area() << std::endl;
		delete (ptr);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}