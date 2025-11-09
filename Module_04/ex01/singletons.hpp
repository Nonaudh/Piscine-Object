#ifndef SINGLETONS_HPP
# define SINGLETONS_HPP

# include <list>
# include <iostream>
# include "person.hpp"
# include <algorithm>
# include <memory>

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
		SomethingList() {}
		std::list<std::shared_ptr<T>> data;

	public :
		void	add(std::shared_ptr<T>& val) {
			auto it = std::find_if
		}

		// const std::list<T>& getData(void) const {
		// 	return (this->data);
		// }
};

class	StudentList : public SomethingList<Student>, public Singletons<StudentList>
{
	private :
		// friend class Singletons<StudentList>;
		StudentList() {}

	public :
		friend std::ostream& operator << (std::ostream& os, const StudentList &list) {

		}
};

#endif
