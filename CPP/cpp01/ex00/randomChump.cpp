
#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie* zombie = newZombie(name);
    zombie->announce();
    // You can use here the zombie outside of the scope of the function
    delete zombie; // Call the destructor
}