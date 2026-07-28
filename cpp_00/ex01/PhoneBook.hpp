#pragma once
#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
#include "Contact.hpp"
#include <iomanip>
#include <string>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int	_index_last_change;
		void    printParam(std::string str);
	public:
		PhoneBook ();
		void addContact();
		void	showContact(int index);
		void    searchContact();
};
#endif