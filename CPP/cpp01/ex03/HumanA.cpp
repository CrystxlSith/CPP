#include "HumanA.hpp"

HumanA::HumanA( std::string str, Weapon& weapon ) : _name(str), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl; 
}