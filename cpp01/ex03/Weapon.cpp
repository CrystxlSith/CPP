#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

std::string& Weapon::getType()
{
    return _type;
}

void    Weapon::setType( std::string newtype )
{
    this->_type = newtype;
}