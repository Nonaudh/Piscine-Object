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
	Command cmd_1("Monday");

	cmd_1.addArticle(10, 1);
	cmd_1.addArticle(1, 10);
	cmd_1.addArticle(5, 2);
	cmd_1.addArticle(130, 1);

	std::cout << cmd_1.get_total_price() << std::endl;

	thuesdayDiscount cmd_2("Monday");

	cmd_2.addArticle(10, 1);
	cmd_2.addArticle(1, 10);
	cmd_2.addArticle(5, 2);
	cmd_2.addArticle(130, 1);

	std::cout << cmd_2.get_total_price() << std::endl;

	thuesdayDiscount cmd_3("Thuesday");

	cmd_3.addArticle(10, 1);
	cmd_3.addArticle(1, 10);
	cmd_3.addArticle(5, 2);
	cmd_3.addArticle(130, 1);

	std::cout << cmd_3.get_total_price() << std::endl;

	packageReductionDiscount cmd_4("Monday");

	cmd_4.addArticle(10, 1);
	cmd_4.addArticle(1, 10);
	cmd_4.addArticle(5, 2);
	cmd_4.addArticle(130, 1);

	std::cout << cmd_4.get_total_price() << std::endl;

	return (0);
}