#ifndef SINGLETONS_HPP
# define SINGLETONS_HPP

# include <list>
# include <iostream>
# include "person.hpp"
# include <algorithm>

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
		std::list<std::reference_wrapper<T>>	data;

	public :
		void	add(T& value) {
			// typename std::list<T>::iterator it;
			// std::cout << "val; " << &value << std::endl;
			// for (it = this->data.begin(); it != this->data.end(); ++it)
			// {
			// 	if (&it->getInst() == &value)
			// 		break ;
			// }
			// if (it == this->data.end())
			// 	data.push_back(value);
			auto it = std::find_if(this->data.begin(), this->data.end(),
				[&](const std::reference_wrapper<T>& ref) {
					return (&ref.get() == &value);
				});

			if (it == this->data.end())
				data.push_back(value);
		}

		// const std::list<T>& getData(void) const {
		// 	return (this->data);
		// }

		const std::list<std::reference_wrapper<T>>& getData() const {
			return (this->data);
		}

		// size_t	size(void) { // to erase
		// 	return (this->data.size());
		// }
};

class	StudentList : public SomethingList<Student>, public Singletons<StudentList>
{
	// private :
		// friend class Singletons<StudentList>;
		// StudentList() {}

	public :
		friend std::ostream& operator << (std::ostream& os, const StudentList &list) {
			// // const std::list<Student>& l = list.getData();
			// const std::list<std::reference_wrapper<T>>& l = 
			// for (std::list<Student>::const_iterator it = l.begin(); 
			// 	it != l.end(); ++it)
			// 		os << &(*it) << " : " << it->getName() << std::endl;
			// return (os);
			for (const auto& ref : list.getData()) {
            os << ref.get().getName() << "\n";  // access Student info
        }
        return os;
		}
};

#endif
