#pragma once
#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__
# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string	phoneNumber;
		std::string darkestSecret;
	public:
		static Contact	get_data_contact();
};
#endif
