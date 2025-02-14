#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->setName("");
    this->setHitpoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap String constructor called" << std::endl;
    this->setHitpoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap)
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
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage !" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
    {
        std::cout << "ScavTrap " << this->getName() << " doesn't have enough energy!" << std::endl;
    }
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << std::endl;
}