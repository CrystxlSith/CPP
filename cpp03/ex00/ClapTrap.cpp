#include "ClapTrap.hpp"


ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
}

ClapTrap::~ClapTrap()
{
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_attackDamage > 0)
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy !" << std::endl;
}