#include "PhoneBook.hpp"
#include <cstring>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
    // Initialize index and oldest contact
   _index = 0;
   _oldest = 0;
    return;
}

PhoneBook::~PhoneBook()
{
    std::cout << "See You Soon !!" << std::endl;
    return;
}

// Format string to 10 characters
std::string formatString(const std::string& str)
{
    // If string is longer than 10 characters, truncate it
    // Else, add spaces to make it 10 characters long
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    else
    {
        return std::string(10 - str.length(), ' ') + str;
    }
}


void    PhoneBook::verif_index()
{
    int i = 0;
    std::string input;

    std::getline(std::cin, input);
    if (input[1])
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    i = std::atoi(input.c_str());
    if (i <= _index && i > 0)
    {
        displayContact(_contacts[i - 1]);
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}

void PhoneBook::printContact(void)
{
    int i = 0;
    std::string str;

    std::cout << " ___________________________________________" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;  
    while (i < _index)
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        std::cout << "|";

        // Print index
        std::cout << "         " << i + 1 << "|";

        // Print first name
        str = _contacts[i].getRname();
        std::cout << formatString(str) << "|";

        // Print last name
        str = _contacts[i].getLname();
        std::cout << formatString(str) << "|";

        // Print nickname
        str = _contacts[i].getNickname();
        std::cout << formatString(str) << "|" << std::endl;

        i++;
    }
    std::cout << " ___________________________________________" << std::endl;
    std::cout << "Enter index to display contact" << std::endl;
    verif_index();
}

void PhoneBook::addContact(const Contact &contact)
{
    if (_index < 8)
    {
        _contacts[_index] = contact;
        _index++;
        std::cout << "index = " << _index << std::endl;
        std::cout << "Contact Added" << std::endl;
    }
    else if (_index > 7)
    {
        _contacts[_oldest] = contact;
        if (_oldest == 7)
            _oldest = 0;
        _oldest++;
    }
    return;
}

// Create a new contact
void    PhoneBook::create_contact(PhoneBook &phonebook)
{
    Contact contact;
    std::string input;

    std::cout << "Enter Last Name" << std::endl;
    std::getline(std::cin, input);
    contact.setLname(input);

    std::cout << "Enter First Name" << std::endl;
    std::getline(std::cin, input);
    contact.setRname(input);
    
    std::cout << "Enter Phone Number" << std::endl;
    std::getline(std::cin, input);
    contact.setPhonenb(input);

    std::cout << "Enter Nickname" << std::endl;
    std::getline(std::cin, input);
    contact.setNickname(input);

    std::cout << "Enter Your Darkest Secret..." << std::endl;
    std::getline(std::cin, input);
    contact.setSecret(input);

    phonebook.addContact(contact);
}

// Display contact information
void    PhoneBook::displayContact(const Contact contact)
{
    std::cout << "First Name: " << contact.getRname() << std::endl;
    std::cout << "Last Name: " << contact.getLname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhonenb() << std::endl;
    std::cout << "Secret: " << contact.getSecret() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
} 