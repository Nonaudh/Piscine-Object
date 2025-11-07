#ifndef SINGLETONS_HPP
# define SINGLETONS_HPP

#include <list>
#include <iostream>

template <typename T>
class	Singletons
{
	protected :
		Singletons() {}
		~Singletons() {}

	public :
		static T&	getInstance() {
			static T	instance;
			return (instance);	
		}
		Singletons(const Singletons&) = delete;
		Singletons& operator=(const Singletons&) = delete;
};

template <typename T>
class	SomethingList
{
	protected :
		// SomethingList() {}
		std::list<T>	data;

	public :
		void	add(T& value) {
			typename std::list<T>::iterator it;
			for (it = this->data.begin(); it != this->data.end(); ++it)
			{
				if (&(*it) == &value)
					break ;
			}
			if (it == this->data.end())
				data.push_back(value);
		}
		size_t	size(void) {
			return (this->data.size());
		}
};

class	StudentList : public SomethingList<Student>, public Singletons<StudentList>
{
	// private :
		// friend class Singletons<StudentList>;
		// StudentList() {}

};

#endif
