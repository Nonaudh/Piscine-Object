#include "Graph.hpp"

int main (void)
{
	Graph g;

	Vector2 v1(3, 3);
	Vector2 v2(3, 2);
	Vector2 v3(3, 0);
	Vector2 v4(3, 0);

	g.addVector2(v1);
	g.addVector2(v2);
	g.addVector2(v3);
	g.addVector2(v4);

	std::cout << g;

	return (0);
}