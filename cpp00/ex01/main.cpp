#include "PhoneBook.hpp"

void    welcome_message()
{
    std::cout << "Please enter a command" << std::endl;
}

int main()
{
    PhoneBook phonebook;
    std::string input;

    while (true)
    {
        welcome_message();
        
        std::getline(std::cin, input);
        if (input.empty())
            break;
        if (input == "ADD")
            phonebook.create_contact(phonebook);
        else if (input == "SEARCH")
            phonebook.printContact();
        else if (input == "EXIT")
            break ;
    }
    return 0;
}
