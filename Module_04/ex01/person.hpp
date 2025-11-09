#ifndef PERSON_HPP
# define PERSON_HPP

# include <string>
# include <vector>
# include <iostream>
# include "form.hpp"

class	Room;
class	Course;
class	Classroom;

class Person
{
	protected :
		std::string _name;

	private:
		Room* _currentRoom;

	public:
		Person(std::string p_name) {
			this->_name = p_name;
		}
		~Person(void) {
			std::cout << this->_name << " got destroyed" << std::endl;
		}
		const std::string& getName() const {
			return (this->_name);
		}
		const Person& getInst() const {
			return (*this);
		}
		Room* room() {return (_currentRoom);}
};

class Student : public Person
{
	private:
		std::vector<Course*> _subscribedCourse;

	public:
		Student(std::string p_name) : Person(p_name) {}
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};

class Staff : public Person
{
	private:

	public:
		void sign(Form* p_form);
};

class Headmaster : public Staff
{
	private:
		std::vector<Form*> _formToValidate;
		
	public:
		void receiveForm(Form* p_form);
};

class Secretary : public Staff
{
	private:

	public:
		Form* createForm(FormType p_formType);
		void archiveForm();
};

class Professor : public Staff
{
	private:
		Course* _currentCourse;

	public:
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};

#endif
