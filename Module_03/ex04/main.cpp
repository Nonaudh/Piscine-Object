#include "LoggerFile.hpp"
#include "LoggerOstream.hpp"
#include <list>
#include <iostream>

void	fill(std::list<std::string>& theCrou)
{
	std::string s1("Knick-knack paddy whack, c'est Rascar Capac");
	std::string s2("Ma technique te slack, mon meilleur pote c'est mon mac, mec");
	std::string s3("J'aime mon hamac mais ma technique te nique");
	std::string s4("J'suis trop esthétique quand j'ai bu deux gin tonic");
	std::string s5("Époque en toc, que le grand cric me croque");
	std::string s6("Blah, blah, blah, fuck le rock et le baroque");

	theCrou.push_back(s1);
	theCrou.push_back(s2);
	theCrou.push_back(s3);
	theCrou.push_back(s4);
	theCrou.push_back(s5);
	theCrou.push_back(s6);
}

int	main(void)
{
	std::list<std::string> theCrou;

	fill(theCrou);

	try
	{
		LoggerOstream	log(std::cout);

		for (std::list<std::string>::iterator it = theCrou.begin();
			it != theCrou.end(); ++it)
		{
			log.write(*it);
		}	
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}

}
