#include "course.hpp"
#include "form.hpp"
#include "person.hpp"
#include "room.hpp"
#include "singletons.hpp"
#include <thread>
#include "list.hpp"

void	Foo()
{
	StudentList& pedro = StudentList::getInstance();

	std::shared_ptr<Student> s(new Student("Arnaud"));
	std::shared_ptr<Student> t(new Student("Julien"));

	pedro.add(s);
	pedro.add(s);

	if (pedro.retrieve(s) != pedro.end())
		std::cout << s->getName() << " is on the list\n";
	if (pedro.retrieve(t) != pedro.end())
		std::cout << t->getName() << " is on the list\n";
}

void	Bar()
{
	std::shared_ptr<Student> s(new Student("Jean"));

 	StudentList::getInstance().add(s);
}

int main (void)
{
	std::thread t1(Foo);
	std::thread t2(Bar);
	// std::thread t3(Bar);

	t1.join();
	t2.join();
	// t3.join();

	StudentList& l = StudentList::getInstance();
	// Student s("Arnaud");
	// l.add(s);
	CourseList& s = CourseList::getInstance();

	std::shared_ptr<Course> c(new Course("course"));

	s.add(c);

	std::cout <<  l << std::endl;
}