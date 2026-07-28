#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone;
	std::string option;

	while (option != "EXIT")
	{
		std::cout << "Select option:\n\tADD -> New contact\n\tSEARCH -> Find user\n\tEXIT -> Exit program"
		<< std::endl;
		std::cin >> option;
		if (option == "ADD")
		{
			phone.addContact();
		}
		else if (option  == "SEARCH")
		{
			phone.searchContact();
		}
		else if (option != "EXIT")
			std::cout << "Invalid input" << std::endl;
	}
		std::cout << "EXIT" << std::endl;
	return (0);
}