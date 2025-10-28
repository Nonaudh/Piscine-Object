#include "command.hpp"
#include <iostream>

int main (void)
{
	Command cmd("Arnaud");

	cmd.addArticle(10, 1);
	cmd.addArticle(1, 10);
	cmd.addArticle(5, 2);

	std::cout << "TP; " << cmd.get_total_price() << std::endl;

	return (0);
}