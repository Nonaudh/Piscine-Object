#include "Statistic.hpp"

Statistic::Statistic(void)
{
	std::cout << "Statistic Constructor" << std::endl;
	this->level = 0;
	this->exp = 0;
}

Statistic::~Statistic(void)
{
	std::cout << "Statistic Destructor" << std::endl;
}
