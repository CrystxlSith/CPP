#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitpoints(10), _energyPoints(10), _attackDamage(2)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(2)
{
    std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() > 0 && this->getAttackDamage() > 0)
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy or Attack damages!" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;

}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (amount > 10)
        amount = 10;
    if (this->getHitpoints() <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is already dead !" << std::endl;
        return ;
    }
    else
    {
        this->setHitpoints(this->getHitpoints() - (int)amount);
        std::cout << "ClapTrap " << this->getName() << " take " << amount << " damage(s) !" << std::endl;
        if (this->getHitpoints() <= 0)
            std::cout << "ClapTrap " << this->getName() << " is dead !" << std::endl;
    }
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (this->getHitpoints() > 0)
    {
        if (this->getEnergyPoints() > 0)
        {
            std::cout << "ClapTrap " << this->getName() << " repairs " << amount << " damage(s)! " << "He now have " << this->getHitpoints() + amount << " hit points." << std::endl;
            this->setHitpoints(this->getHitpoints() + (int)amount);
            this->setEnergyPoints(this->getEnergyPoints() - 1);
        }
        else
            std::cout << "ClapTrap " << this->getName() << " doesn't have enough energy to repair!" << std::endl;
    }
    }

void    ClapTrap::setName( std::string name )
{
    this->_name = name;
}

void    ClapTrap::setHitpoints( int hitpoints )
{
    this->_hitpoints = hitpoints;
}

void    ClapTrap::setEnergyPoints( int energyPoints )
{
    this->_energyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage( int attackDamage )
{
    this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName( void ) const
{
    return this->_name;
}

int ClapTrap::getHitpoints( void ) const
{
    return this->_hitpoints;
}

int ClapTrap::getEnergyPoints( void ) const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage( void ) const
{
    return this->_attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
    this->_name = claptrap._name;
    this->_hitpoints = claptrap._hitpoints;
    this->_energyPoints = claptrap._energyPoints;
    this->_attackDamage = claptrap._attackDamage;
    return *this;
}
