#pragma once
#ifndef __UTILS_HPP__
# define __UTILS_HPP__
# include "PhoneBook.hpp"
# include <iomanip>
#include <iostream>

namespace ft
{
	void	out_table(PhoneBook book, int wide, char separator, int pos);
	void	out_format(char c, int wide, int pos, int jump);
}

#endif