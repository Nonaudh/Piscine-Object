#ifndef SINGLETONS_HPP
# define SINGLETONS_HPP

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

#endif
