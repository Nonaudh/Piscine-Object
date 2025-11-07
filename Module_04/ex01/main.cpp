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

	std::cout << &pedro << std::endl;

	Student s("Arnaud");

	pedro.add(s);
}

void	Bar()
{
	StudentList& pedro = StudentList::getInstance();

	std::cout << &pedro << std::endl;

	Student s("Jean");

	pedro.add(s);
}

int main (void)
{
	std::thread t1(Foo);
	std::thread t2(Bar);
	std::thread t3(Bar);

	t1.join();
	t2.join();
	t3.join();

	StudentList& l = StudentList::getInstance();

	std::cout << std::dec <<  l.size() << std::endl;
}