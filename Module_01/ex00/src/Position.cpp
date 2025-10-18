#include "Position.hpp"

Position::Position(void)
{
	std::cout << "Position Constructor" << std::endl;
	
	this->x = 0;
	this->y = 0;
	this->z	= 0;
}

Position::~Position(void)
{
	std::cout << "Position Destructor" << std::endl;	
}
