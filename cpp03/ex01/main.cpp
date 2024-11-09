#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scavtrap("Scavtrap");
    ScavTrap scavtrap2("Scavtrap2");

    scavtrap.attack("Skag");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap2.attack("Skag");
    scavtrap2.takeDamage(5);
    scavtrap2.beRepaired(5);
    scavtrap.guardGate();
    return 0;
}
