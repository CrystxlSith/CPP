#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap String constructor called" << std::endl;
    std::cout << "ScavTrap " << this->getName() << " is born !" << std::endl;
    this->setHitpoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = scavtrap;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->setName(scavtrap.getName());
    this->setHitpoints(scavtrap.getHitpoints());
    this->setEnergyPoints(scavtrap.getEnergyPoints());
    this->setAttackDamage(scavtrap.getAttackDamage());
    return *this;
}

void    ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage !" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << std::endl;
}