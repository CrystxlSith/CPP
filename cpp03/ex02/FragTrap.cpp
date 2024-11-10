#include "FragTrap.hpp"

FragTrap::FragTrap(void)  : ClapTrap()
{
    std::cout << "Fragtrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Fragtrap String constructor called" << std::endl;
    this->setHitpoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap)
{
    std::cout << "Fragtrap Copy constructor called" << std::endl;
    *this = fragtrap;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
    std::cout << "Fragtrap Assignation operator called" << std::endl;
    this->setName(fragtrap.getName());
    this->setHitpoints(fragtrap.getHitpoints());
    this->setEnergyPoints(fragtrap.getEnergyPoints());
    this->setAttackDamage(fragtrap.getAttackDamage());
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " says: \"High five guys!\"" << std::endl;
}