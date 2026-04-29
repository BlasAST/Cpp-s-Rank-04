#include "PhoneBook.hpp"
#include <iostream>

void	menu(PhoneBook book, std::string input)
{
	if (input == "ADD")
		book.addContact(book, Contact::get_data_contact());
	// else if (input == "SEARCH")
	else if (input == "EXIT")
		return ;
}
int	main(void)
{
	PhoneBook book;

	std::string input;

	do
	{
		std::cout << "Select:" << std::endl
			<< "ADD: Save a new contact" << std::endl
			<< "SEARCH: Display a specific contact" << std::endl
			<< "EXIT: Close program" << std::endl;
		getline(std::cin, input);
		menu(book, input);
	} while (!input.empty());
	return (0);	
}