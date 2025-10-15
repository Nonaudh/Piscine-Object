#include "Graph.hpp"

bool	operator > (Vector2 &ref1, Vector2 &ref2)
{
	if (ref1.y > ref2.y)
		return (true);
	if (ref1.y == ref2.y)
	{
		if (ref1.x < ref2.x)
			return (true);
	}
	return (false);
}

bool	operator != (Vector2 &ref1, Vector2 &ref2)
{
	if (ref1.x != ref2.x || ref1.y != ref2.y)
		return (true);
	return (false);
}

void	Graph::addVector2(Vector2 newPoint)
{
	std::list<Vector2>::iterator it;

	for ( it = v.begin(); (it != v.end() && newPoint != *it) ; ++it)
		;
	if (it != v.end())
		return ;

	if (this->v.size() == 0)
		v.push_front(newPoint);
	else
	{
		std::list<Vector2>::iterator it;

		for (it = v.begin(); it != v.end(); ++it)
		{
			if (newPoint > *it)
			{
				v.insert(it, newPoint);
				break ;
			}
		}
		if (it == v.end())
			v.push_back(newPoint);
	}
}

std::ostream& operator << (std::ostream& p_os, const Graph &graph)
{
	for (std::list<Vector2>::const_iterator it = graph.v.begin(); it != graph.v.end(); ++it)
	{
		std::cout << "x; " << it->x << " y; " << it->y << std::endl;
	}
	return (p_os);
}
