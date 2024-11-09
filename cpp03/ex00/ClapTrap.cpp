#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitpoints(10), _energyPoints(10), _attackDamage(2)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(2)
{
    std::cout << "String constructor called" << std::endl;
    std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;
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
    if (this->_energyPoints > 0 && this->_attackDamage > 0)
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
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
    if (amount < 1)
    {
        std::cout << "ClapTrap " << this->_name << " can't take this amount of damages !" << std::endl;
        return ;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
        return ;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " take " << amount << " damage(s) !" << std::endl;
        this->_hitpoints -= amount;
    }
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if ((amount + this->_hitpoints) <= 10 && (amount + this->_hitpoints) >= 1)
    {
        std::cout << "ClapTrap " << this->_name << " repairs " << amount << " damage(s)! " << "He now has " << this->_hitpoints + amount << " hit points." << std::endl;
        this->_hitpoints += amount;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << _name << " can't repare this amount of damages !" << std::endl;
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