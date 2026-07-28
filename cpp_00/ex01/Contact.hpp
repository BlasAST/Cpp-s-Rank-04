#pragma once
#ifndef __EX__
#define __EX__
#include <iostream>
#include <string>
class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact();
		~Contact();
		std::string get_firstName();
		std::string get_lastName();
		std::string	getNickName();
		std::string	get_phoneNumber();
		std::string	getDarkSecret();

		void		set_firstName(std::string _firstName);
		void		set_lastName(std::string _lastName);
		void		setNickName(std::string nickName);
		void		set_phoneNumber(std::string	_phoneNumber);
		void		setDarkSecret(std::string darkesSecret);

};

#endif