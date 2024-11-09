#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap claptrap("Claptrap");
    ClapTrap claptrap2("Claptrap2");

    claptrap.attack("Skag");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    claptrap2.attack("Skag");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(5);
    return 0;
}
