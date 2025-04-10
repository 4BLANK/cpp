#include "./PhoneBook.hpp"

void print_enough(std::string str)
{
	int i = 0;
	int len = str.length();
	int spaces = 10 - len;
	for (i = 0; i < spaces; i++)
		std::cout << " ";
  if (len > 10)
  {
    for (int j = 0; j < 9; j++)
      std::cout << str[j];
    std::cout << ".";
  }
  else
  {
    for (int j = 0; j < len; j++)
      std::cout << str[j];
  }
}

int invalid_char(std::string str)
{
  for (int i = 0; i < (int)(str.length()); i++)
  {
    if (str[i] < '0' || str[i] > '9')
      return (1);
  }
  return (0);
}

void PhoneBook::add()
{
	static int index = 0;

	if (index == 8)
		index = 0;
  std::getline(std::cin, (PhoneBook::contacts)[index].first_name);
	std::getline(std::cin, (PhoneBook::contacts)[index].last_name);
	std::getline(std::cin, (PhoneBook::contacts)[index].nickname);
	std::getline(std::cin, (PhoneBook::contacts)[index].phone_number);
	std::getline(std::cin, (PhoneBook::contacts)[index].darkest_secret);
	if ((PhoneBook::contacts)[index].first_name == ""\
			|| (PhoneBook::contacts)[index].last_name == "" \
			|| (PhoneBook::contacts)[index].nickname == "" \
			|| (PhoneBook::contacts)[index].phone_number == "" \
			|| (PhoneBook::contacts)[index].darkest_secret == "" \
	   )
		return ;
  std::cout << "|";
  std::cout << index;
  std::cout << "|";
  print_enough((PhoneBook::contacts)[index].first_name);
  std::cout << "|";
  print_enough((PhoneBook::contacts)[index].last_name);
  std::cout << "|";
  print_enough((PhoneBook::contacts)[index].nickname);
  std::cout << "|\n";
	index++;
}

int how_many(int index, Contact contacts[8])
{
  return ((contacts)[index].first_name == ""\
			|| (contacts)[index].last_name == "" \
			|| (contacts)[index].nickname == "" \
			|| (contacts)[index].phone_number == "" \
			|| (contacts)[index].darkest_secret == "");
}

void PhoneBook::search()
{
	int index = 0;
  std::string index_holder;
  if (how_many(index, PhoneBook::contacts))
  {
    std::cout << "no contacts yet\n";
    return ;
  }
  while (!how_many(index, PhoneBook::contacts))
  {
    std::cout << "|";
    std::cout << index;
    std::cout << "|";
    print_enough((PhoneBook::contacts)[index].first_name);
    std::cout << "|";
    print_enough((PhoneBook::contacts)[index].last_name);
    std::cout << "|";
    print_enough((PhoneBook::contacts)[index].nickname);
    std::cout << "|\n";
    index++;
  }
  std::cout << "enter the index\n";
  std::getline(std::cin, index_holder);
  if (invalid_char(index_holder))
  {
    std::cout << "invalid input\n";
    return ;
  }
  index = std::atoi(index_holder.c_str());
  if (index > 7 || index < 0 || how_many(index, PhoneBook::contacts))
  {
    std::cout << "invalid index \n";
    return ;
  }
  std::cout << "first name: " << (PhoneBook::contacts)[index].first_name << std::endl;
  std::cout << "last name: " << (PhoneBook::contacts)[index].last_name << std::endl;
  std::cout << "nickname: " << (PhoneBook::contacts)[index].nickname << std::endl;
  std::cout << "phone number: " << (PhoneBook::contacts)[index].phone_number << std::endl;
  std::cout << "darkest secret: " << (PhoneBook::contacts)[index].darkest_secret << std::endl;
}
