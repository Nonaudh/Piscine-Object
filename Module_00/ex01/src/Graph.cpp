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

void	actualizeSize(Vector2 &size, Vector2 &newPoint)
{
	if (newPoint.x > size.x)
		size.x = newPoint.x + 1;
	
	if (newPoint.y > size.y)
		size.y = newPoint.y + 1;
}

void	Graph::addVector2(Vector2 newPoint)
{
	std::list<Vector2>::iterator it;

	for ( it = v.begin(); (it != v.end() && newPoint != *it) ; ++it)
		;
	if (it != v.end() || newPoint.x < 0 || newPoint.y < 0)
		return ;

	for (it = v.begin(); it != v.end(); ++it)
	{
		if (newPoint > *it)
			break ;
	}
	v.insert(it, newPoint);

	actualizeSize(this->size, newPoint);
}

void	lineNumber(int y)
{
	if (y != -1)
		std::cout << y << " ";
	else
		std::cout << "  ";
}


void	Graph::printPoint(std::list<Vector2>::iterator &it, int xAxis, int yAxis)
{
	if (it->x == xAxis && it->y == yAxis && it != this->v.end())
	{
		std::cout << "X ";
		++it;
	}
	else if (yAxis != -1)
		std::cout << ". ";
	else
	{
		std::cout << xAxis << " ";
	}
}

void	Graph::drawLine(std::list<Vector2>::iterator &it, int yAxis)
{
	for (int xAxis = -3; xAxis != this->size.x + 1; ++xAxis)
	{
		switch (xAxis)
		{
			case (-3):
				std::cout << ">";
				break;
			case (-2):
				std::cout << "& ";
				break;
			case (-1):
				lineNumber(yAxis);
				break;
			default :
				printPoint(it, xAxis, yAxis);
		}
	}
	std::cout << "\n";
}

void	Graph::drawGraph(void)
{
	std::list<Vector2>::iterator it = this->v.begin();

	for (int yAxis = size.y; yAxis != -2; --yAxis)
	{
		drawLine(it, yAxis);
	}
}

std::ostream& operator << (std::ostream& p_os, const Graph &graph)
{
	for (std::list<Vector2>::const_iterator it = graph.v.begin(); it != graph.v.end(); ++it)
	{
		std::cout << "x; " << it->x << " y; " << it->y << std::endl;
	}
	std::cout << "size; " << graph.size.x << " , " << graph.size.y << std::endl;
	return (p_os);
}
