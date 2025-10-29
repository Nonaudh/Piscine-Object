#include "command.hpp"
#include "packageReductionDiscount.hpp"
#include "thuesdayDiscount.hpp"
#include <cctype>

static	bool isThuesday(std::string day)
{
	for (size_t i = 0; day[i]; ++i)
		day[i] = tolower(day[i]);
	if (day == "thuesday")
		return (1);
	return (0);
}

int main (void)
{
	thuesdayDiscount cmd("Monday");

	cmd.addArticle(10, 1);
	cmd.addArticle(1, 10);
	cmd.addArticle(5, 2);
	cmd.addArticle(130, 1);

	std::cout << cmd.get_total_price() << std::endl;

	return (0);
}