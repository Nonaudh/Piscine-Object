#ifndef LIST_HPP
# define LIST_HPP

# include "singletons.hpp"
# include "person.hpp"
# include "course.hpp"
# include "room.hpp"
# include <list>
# include <iostream>
# include <algorithm>
# include <memory>

template <typename T>
class	SomethingList
{
	protected :
		SomethingList() {}
		std::list<std::shared_ptr<T>> data;

	public :
		void	add(std::shared_ptr<T>& val) {
			if (!val)
				return ;
			auto it = std::find_if(this->data.begin(), this->data.end(),
				[&](const std::shared_ptr<T>& ptr) {
					return (ptr.get() == val.get());
				});
				if (it == this->data.end())
					this->data.push_back(val);
		}

		typename std::list<std::shared_ptr<T>>::const_iterator	begin(void) {
			return (this->data.begin());
		}
		
		typename std::list<std::shared_ptr<T>>::const_iterator	end(void) {
			return (this->data.end());
		}

		typename std::list<std::shared_ptr<T>>::const_iterator	retrieve(std::shared_ptr<T> val) const {
			auto it = std::find_if(this->data.begin(), this->data.end(),
				[&](const std::shared_ptr<T>& ptr) {
					return (ptr.get() == val.get());
				});
				return (it);
		}

		const std::list<std::shared_ptr<T>>& getData(void) const {
			return (this->data);
		}
};

class	StudentList : public SomethingList<Student>, public Singletons<StudentList>
{
	private :
		friend class Singletons<StudentList>;
		StudentList() {}

	public :
		friend std::ostream& operator << (std::ostream& os, const StudentList &list) {
			for (const auto it : list.getData())
				os << it->getName() << std::endl;
			return (os);
		}
};

class	StaffList : public SomethingList<Staff>, public Singletons<StaffList>
{
	private :
		friend class Singletons<StaffList>;
		StaffList() {}

	public :
};

class	CourseList : public SomethingList<Course>, public Singletons<CourseList>
{
	private :
		friend class Singletons<CourseList>;
		CourseList() {}

	public :
};

class	RoomList : public SomethingList<Room>, public Singletons<RoomList>
{
	private :
		friend class Singletons<RoomList>;
		RoomList() {}

	public :
};

#endif