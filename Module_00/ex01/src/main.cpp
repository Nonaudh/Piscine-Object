#include "Graph.hpp"

int main (void)
{
	Graph g;

	Vector2 v1(3, 3);
	Vector2 v2(10, 10);
	Vector2 v7(-3, 2);
	Vector2 v3(3, 0);
	Vector2 v6(1, 8);
	Vector2 v4(0, 0);
	Vector2 v5(4, 6);

	g.addVector2(v1);
	g.addVector2(v2);
	g.addVector2(v3);
	g.addVector2(v4);
	g.addVector2(v5);
	g.addVector2(v6);
	g.addVector2(v7);

	std::cout << g;

	g.drawGraph();

	return (0);
}