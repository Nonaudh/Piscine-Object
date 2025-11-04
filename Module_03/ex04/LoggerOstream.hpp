#ifndef LOGGEROSTREAM_HPP
# define LOGGEROSTREAM_HPP

# include "ILogger.hpp"
# include <fstream>
# include <exception>

class	LoggerOstream : public ILogger
{
	private :
		std::ostream& out;

	public :
		LoggerOstream(std::ostream& os) : out(os) , ILogger() {;}
		~LoggerOstream(void) {;}

		void write(std::string str) {
			this->out << "~&: " << str << std::endl;
		}
};

#endif
