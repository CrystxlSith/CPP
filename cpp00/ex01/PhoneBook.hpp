#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int	_index;
		int	_oldest;
		Contact _contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(const Contact &contact);
		void printContact(void);
		void displayContact(const Contact contact);
		void create_contact(PhoneBook &phonebook);
		void verif_index();
};

#endif
