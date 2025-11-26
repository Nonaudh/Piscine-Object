#include "Graph.hpp"

int main (void)
{
	Graph g;

	Vector2 v1(3, 3);
	Vector2 v2(7, 8);
	Vector2 v7(-3, 2);
	Vector2 v3(3, 0);
	Vector2 v6(1, 8);
	Vector2 v4(4, 6);
	Vector2 v5(4, 6);

	g.addVector2(v1);
	g.addVector2(v2);
	g.addVector2(v3);
	g.addVector2(v4);
	g.addVector2(v5);
	g.addVector2(v6);
	g.addVector2(v7);

	g.drawGraph();

	std::cout << std::endl;

	try
	{
		Vector2 test = g.retrieve(3, 0);

		std::cout << test.x << " " << test.y << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}