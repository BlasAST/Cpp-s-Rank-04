#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void	menu(PhoneBook book, std::string input)
{
	if (input == "ADD")
		book.addContact(book, Contact::get_data_contact());
	// else if (input == "SEARCH")
}
int	main(void)
{
	PhoneBook book;

	std::string input;

	do
	{
		std::cout << "Select:\n\n";
		std::cout << std::setw(10) << std::right << "ADD: Save a new contact" << std::endl;
		std::cout << std::setw(10) << std::right << "SEARCH: Display a specific contact" << std::endl;
		std::cout << std::setw(10) << std::right << "EXIT: Close program" << std::endl;
		getline(std::cin, input);
		if (input == "EXIT")
			return (0);
		else
			menu(book, input);
	} while (!input.empty());
	return (0);	
}