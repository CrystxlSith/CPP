#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon
{
private:
    std::string _type;
public:
    Weapon(/* args */);
    ~Weapon();
    std::string& getType();
    void  setType( std::string newtype );
};



#endif