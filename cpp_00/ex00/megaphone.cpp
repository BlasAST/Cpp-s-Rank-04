#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int j = 1; j < argc; j++)
	{
		std::string s(argv[j]);
		for (size_t i = 0; i < s.length(); i++)
		{
			if (isalpha(s[i]))
				std::cout << (char) toupper(s[i]);
			else
				std::cout << s[i];
		}
		if (j < argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}