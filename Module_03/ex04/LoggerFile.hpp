#ifndef LOGGERFILE_HPP
# define LOGGERFILE_HPP

# include "ILogger.hpp"
# include <fstream>
# include <exception>

class	LoggerFile : public ILogger
{
	private :
		std::ofstream	file;

	public :
		LoggerFile(std::string filename) : ILogger() {
			this->file.open(filename, std::ios::out | std::ios::app);
			if (!this->file.is_open())
				throw std::runtime_error("Error : Can't open file");
		}

		~LoggerFile(void) {
			this->file.close();
		}

		void write(std::string str) {
			file << "~$: " << str << std::endl;
		}
};

#endif
