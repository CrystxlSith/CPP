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

void    Harl::complain( std::string level )
{
    struct levelMap
    {
        std::string level;
        void (Harl::*HarlMemFn)(void);
    };
    levelMap levelsmap[4] = {
        {"debug", &Harl::debug},
        {"info", &Harl::info},
        {"warning", &Harl::warning},
        {"error", &Harl::error},
    };
    int i = 0;
    std::string levels[4] = {"debug", "info", "warning", "error"};
    while (i < 4)
    {
        if (levelsmap[i].level == level)
        {
            (this->*(levelsmap[i].HarlMemFn))();
            return ;
        }
        i++;
    }
    std::cout << "Unknown level : " << level << std::endl;
}

