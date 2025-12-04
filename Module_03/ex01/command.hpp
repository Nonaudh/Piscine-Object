#ifndef COMMAND_HPP
# define COMMAND_HPP

# include <string>
# include <vector>
# include <iostream>

class   Command
{
    protected :
		int	id;
		std::string	date;
		std::string	client;
		std::vector<std::pair<float, int> >	articles;

	public :
		Command(std::string day) {
			this->id = 0;
			this->date = day;
			this->client = "Mike Tyson";
		}
		virtual ~Command(void) {;}

		void	addArticle(float price, int quantity) {
			if (price <= 0 || quantity <= 0)
				return ;

			std::pair<float, int> newArticle (price, quantity);
			this->articles.push_back(newArticle);
		}

		virtual float	 get_total_price() {
			float totalPrice = 0;
			std::vector<std::pair<float, int> >::iterator	it;

			for (it = this->articles.begin(); it != this->articles.end(); ++it)
				totalPrice += it->first * it->second;

			return (totalPrice);
		}
};

#endif