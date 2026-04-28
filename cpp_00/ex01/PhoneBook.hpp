#pragma once
#ifndef __PHONE_BOOK__
# define __PHONE_BOOK__
#include "Contact.hpp"
class PhoneBook
{
	private:
		static Contact contacts[8];
		static int		sizeContacts;
	public:
		static void addContact(Contact contact);
		static void searchContact();
};
#endif