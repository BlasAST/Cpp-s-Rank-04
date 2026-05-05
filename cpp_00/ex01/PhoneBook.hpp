#pragma once
#ifndef __PHONE_BOOK__
# define __PHONE_BOOK__
#include "Contact.hpp"
class PhoneBook
{
	private:
		static Contact contacts[8];
		int		sizeContacts;
	public:
		static void addContact(PhoneBook &book, Contact contact);
		static void searchContact(PhoneBook &book) const;
};
#endif