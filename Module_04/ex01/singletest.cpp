#include <iostream>
#include <thread>
#include <mutex>

class	SingleStatic
{
	private :
		SingleStatic() {}
		~SingleStatic() {}

	public :
		static SingleStatic&	getInstance() {
			static SingleStatic	instance;
			return (instance);
		}
		SingleStatic(const SingleStatic&) = delete;
		SingleStatic& operator=(const SingleStatic&) = delete;
};


void	Foo()
{
	SingleStatic& pedro = SingleStatic::getInstance();

	std::cout << &pedro << std::endl;
}

int main (void)
{
	std::thread t1(Foo);
	std::thread t2(Foo);

	t1.join();
	t2.join();
}
