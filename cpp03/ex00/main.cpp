#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
    ClapTrap clappy("milou");

    clappy.attack("papy");
    clappy.takeDamage(5);
    return 0;
}
