#include "ClapTrap.hpp"

int main( void )
{
    std::string input;

    std::cout << "What is the name of your ClapTrap? " << std::endl;
    std::getline(std::cin, input);
    ClapTrap clappy(input.c_str());

    std::cout << "Who did he Attack? " << std::endl;
    std::getline(std::cin, input);
    clappy.attack(input.c_str());

    std::cout << "How much damage did he take ? " << std::endl;
    std::getline(std::cin, input);
    clappy.takeDamage(atoi(input.c_str()));

    std::cout << "How much damage do you want to repair? " << std::endl;
    std::getline(std::cin, input);
    clappy.beRepaired(atoi(input.c_str()));
    return 0;
}
