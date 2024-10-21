#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string type);
    ~Weapon();
    std::string& getType();
    void  setType( std::string newtype );
    std::string getType() const;
};

#endif