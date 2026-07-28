#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index_last_change = 0;
}

void	PhoneBook::addContact()
{
	std::string input;
	Contact newContact;
	std::cout << "First Name" << std::endl;
	std::cin >> input;
	newContact.set_firstName(input);
	std::cout << "Last Name" << std::endl;
	std::cin >> input;
	newContact.set_lastName(input);
	std::cout << "Nick Name" << std::endl;
	std::cin >> input;
	newContact.setNickName(input);
	std::cout << "Phone Number" << std::endl;
	std::cin >> input;
	newContact.set_phoneNumber(input);
	std::cout << "Darkest Secret" << std::endl;
	std::cin >> input;
	newContact.setDarkSecret(input);
	_contacts[_index_last_change] = newContact;
	if (_index_last_change != 7)
		_index_last_change++;
	else
		_index_last_change = 0;
}

void	PhoneBook::showContact(int index)
{
	std::cout << "First Name: " <<  _contacts[index].get_firstName() << std::endl;
	std::cout << "Last Name: " <<  _contacts[index].get_lastName() << std::endl;
	std::cout << "Nick Name: " <<  _contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " <<  _contacts[index].get_phoneNumber() << std::endl;
	std::cout << "Darkest Secret: " <<  _contacts[index].getDarkSecret() << std::endl;
}

void    PhoneBook::printParam(std::string str)
{
	int j;

	j = str.length();
	if (j > 10)
	{
		for(int i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
}

void    PhoneBook::searchContact()
{
	int i = 0;
	int index;

	if (_contacts[i].get_firstName().empty())
	{
		std::cout << "Any contact" << std::endl;
		return ;
	}
	std::cout << std::right;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   INDEX  |FIRST NAME|LAST  NAME|NICK  NAME|" << std::endl;
	for (; i < 8; i++)
	{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		printParam(_contacts[i].get_firstName());
		std::cout << "|";
		printParam(_contacts[i].get_lastName());
		std::cout << "|";
		printParam(_contacts[i].getNickName());
		std::cout << "|" << std::endl;
		if (i != 7 &&_contacts[i + 1].get_firstName().empty())
			break;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
		std::cout << "Select contact with index" << std::endl;
		std::cin >> index;
		if (index < 0 || index > i)
			std::cout << "Error: invalid index" << std::endl;
		else
			showContact(index);
}