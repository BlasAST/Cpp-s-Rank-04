#include "Contact.hpp"
#include <iostream>

Contact	Contact::get_data_contact()
{
	Contact new_contact;

	std::cout << "Add new contact \n\n";
	std::cout << "First Name:" << std::endl;
	getline(std::cin, new_contact._firstName);
	return new_contact;
}