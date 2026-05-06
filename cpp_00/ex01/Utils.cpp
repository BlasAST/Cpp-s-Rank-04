#include "Utils.hpp"


void	out_celd(char c, int size, int jump)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << c;
	}
	if (jump)
			std::cout << std::endl;
}
void	ft::out_format(char c, int wide, int pos, int jump)
{
	if (pos)
		std::cout << std::setw(wide) << std::right << c;
	else
		std::cout << std::setw(wide) << std::left << c;
	if (jump)
		std::cout << std::endl;
}

void	ft::out_table(PhoneBook &book, int wide, char separator, int pos)
{
	out_celd('_', 45, 1);
	std::cout << "|";
	ft::out_format('|', 45, 1, 1);
	std::cout << "| INDEX | FIRST NAME | LAST NAME | NICK NAME |" << std::endl;
	std::cout << "|";
	ft::out_format('|', 45, 1, 1);
	out_celd('_', 45, 1);
	for (int j = 0; j < 5; j++)
	{
		std::cout << "|" << std::endl;
		out_celd('_', 6, 0);
	}
	std::cout << std::endl;
	for (int j = 0; j < 5; j++)
	{
		std::cout << "|";
		out_celd('_', 6, 0);
	}
	std::cout << "|" << std::endl;
}


