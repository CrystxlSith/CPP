#include "Weapon.hpp"

int main( void )
{
    Weapon weapon;

    weapon.setType("club");
    std::cout << weapon.getType() << std::endl;
    weapon.setType("a");
    std::cout << weapon.getType() << std::endl;
    return 0;
}
