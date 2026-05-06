#pragma once
#ifndef __PHONE_BOOK__
# define __PHONE_BOOK__
#include "Contact.hpp"
class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_index;
	public:
		void addContact(Contact contact);
		void searchContact(PhoneBook &book) const;
};
#endif