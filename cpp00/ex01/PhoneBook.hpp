#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#endif

#include "./Contact.hpp"

class PhoneBook
{
	public:
		Contact contacts[8];
		void add();
		void search();
};
