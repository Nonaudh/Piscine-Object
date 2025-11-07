#include "course.hpp"
#include "form.hpp"
#include "person.hpp"
#include "room.hpp"
#include "singletons.hpp"
#include <thread>

// int main (void)
// {
// 	StudentList& list = StudentList::getInstance();

// 	std::cout << &list << std::endl;

// 	StudentList &list2 = StudentList::getInstance();

// 	std::cout << &list2 << std::endl;
// }


void	Foo()
{
	StudentList& pedro = StudentList::getInstance();

	Student s("Arnaud");

	pedro.add(s);
	pedro.add(s);
}

void	Bar()
{
	Student s("Jean");
 	StudentList::getInstance().add(s);
}

int main (void)
{
	std::thread t1(Foo);
	// std::thread t2(Bar);
	// std::thread t3(Bar);

	t1.join();
	// t2.join();
	// t3.join();

	StudentList& l = StudentList::getInstance();

	std::cout <<  l << std::endl;
}