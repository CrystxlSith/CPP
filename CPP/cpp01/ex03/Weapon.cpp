#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    setType(type);
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

std::string Weapon::getType() const
{
    return _type;
}