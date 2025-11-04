#ifndef ILOGGER_HPP
# define ILOGGER_HPP

# include <string>

class	ILogger
{
	public :
		ILogger(void) {;}
		virtual ~ILogger(void) {;}
		virtual	void write(std::string str) = 0;
};

#endif
