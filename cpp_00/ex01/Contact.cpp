#include "Contact.hpp"

Contact::Contact()
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::~Contact()
{
	
}
std::string Contact::get_firstName()
{
	return (_firstName);
};
std::string Contact::get_lastName()
{
	return (_lastName);
};
std::string	Contact::getNickName()
{
	return (_nickName);
};
std::string	Contact::get_phoneNumber()
{
	return (_phoneNumber);
};
std::string	Contact::getDarkSecret()
{
	return (_darkestSecret);
};
void		Contact::set_firstName(std::string _firstName)
{
	this->_firstName = _firstName;
};
void		Contact::set_lastName(std::string _lastName)
{
	this->_lastName = _lastName;
};
void		Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
};
void		Contact::set_phoneNumber(std::string	_phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
};
void		Contact::setDarkSecret(std::string darkesSecret)
{
	this->_darkestSecret = darkesSecret;
};