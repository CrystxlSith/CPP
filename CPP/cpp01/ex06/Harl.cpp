#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void    Harl::debug( void )
{
    std::cout <<  "[DEBUG] - I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO] - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING] - I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR] - This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level)
{
    size_t i;
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (i = 0; i < 4; i++)
    {
        if (array[i] == level)
            break;
    }
    switch (i)
    {
        case 0:
           this->debug();
             // fall through
        case 1:
            this->info();
            // fall through
        case 2:
            this->warning();
            // fall through
        case 3:
            this->error();
            break;
        default:
            std::cout << "Unknown level : " << level << std::endl;
        break;
    }
}