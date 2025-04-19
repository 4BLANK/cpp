#include "./PhoneBook.hpp"

int main (void)
{
	std::string option;
	std::string options[3];
	options[0] = "ADD";
	options[1] = "SEARCH";
	options[2] = "EXIT";
	PhoneBook pb;
	while (1)
	{
		std::cout << "ADD, SEARCH OR EXIT\n";
    std::getline(std::cin, option);
    if (std::cin.eof() || !strcmp(option.c_str(), "EXIT"))
      break;
		if (option == "ADD")
			pb.add();
		else if (option == "SEARCH")
			pb.search();
		else if (option == "EXIT")
			return (0);
		else
			std::cout << "Please enter a valid option.\n";
	}
}
