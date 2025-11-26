#ifndef GRAPH_HPP
# define GRAPH_HPP

#include <list>
#include <iostream>
#include <exception>

struct Vector2
{
	public :
		int	x;
		int	y;

		Vector2(int x, int y) : x(x), y(y){;}
};

bool	operator > (Vector2 &ref1, Vector2 &ref2);
bool	operator != (Vector2 &ref1, Vector2 &ref2);

class Graph
{
	private :
		Vector2 size;
		std::list<Vector2>	v;

	public :
		Graph(void) : size(0, 0) {;}
		void	addVector2(Vector2 newPoint);

		void	drawGraph(void);
		void	drawLine(std::list<Vector2>::iterator &it, int yAxis);
		void	printPoint(std::list<Vector2>::iterator &it, int xAxis,int yAxis);
		Vector2&	retrieve(int x, int y);

		friend std::ostream& operator << (std::ostream& p_os, const Graph &graph);
};

# endif
