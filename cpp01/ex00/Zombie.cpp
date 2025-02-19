#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
    std::cout << name << " has been created" << std::endl;
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been destroyed" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
