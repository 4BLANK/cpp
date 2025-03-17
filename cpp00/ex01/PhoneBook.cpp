#include "./PhoneBook.hpp"

void PhoneBook::add()
{
	static int index = 0;

	if (index == 8)
		index = 0;
	std::cin >> (PhoneBook::contacts)[index].first_name;
	std::cin >> (PhoneBook::contacts)[index].last_name;
	std::cin >> (PhoneBook::contacts)[index].nickname;
	std::cin >> (PhoneBook::contacts)[index].phone_number;
	std::cin >> (PhoneBook::contacts)[index].darkest_secret;
	if ((PhoneBook::contacts)[index].first_name == ""\
			|| (PhoneBook::contacts)[index].last_name == "" \
			|| (PhoneBook::contacts)[index].nickname == "" \
			|| (PhoneBook::contacts)[index].phone_number == "" \
			|| (PhoneBook::contacts)[index].darkest_secret == "" \
	   )
		return ;
	index++;
}

static void print_enough(std::string str)
{
	int i = 0;
	int len = str.length();
	int spaces = 10 - len;
	for (i = 0; i < spaces; i++)
		std::cout << " ";
	for (int j = 0; j < len && i++ < 10; j++)
		std::cout << str[j];
	if (spaces < 0)
		std::cout << ".";
}

void PhoneBook::search()
{
	int index = 0;
	std::cout << "Please enter a contact index: \n";
	std::cin >> index;
	if (index > 7 || index < 0)
	{
		std::cout << "Please stay in range(0-7)\n";
		return ;
	}
	if ((PhoneBook::contacts)[index].first_name == ""\
			|| (PhoneBook::contacts)[index].last_name == "" \
			|| (PhoneBook::contacts)[index].nickname == "" \
			|| (PhoneBook::contacts)[index].phone_number == "" \
			|| (PhoneBook::contacts)[index].darkest_secret == "" \
	   )
	{
		std::cout << "Contact not found!\n";
		return ;
	}
	std::cout << "|";
	std::cout << index;
	std::cout << "|";
	print_enough((PhoneBook::contacts)[index].first_name);
	std::cout << "|";
	print_enough((PhoneBook::contacts)[index].last_name);
	std::cout << "|";
	print_enough((PhoneBook::contacts)[index].nickname);
	std::cout << "|\n";

}
