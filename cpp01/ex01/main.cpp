#include "Zombie.hpp"

int main( void )
{
    int N = 42; // Number Of Zombies
    std::string name = "HordeZombie"; // Name Of Each Zombie

    Zombie *horde = zombieHorde(N, name); // Initialisation Of The Horde

    for (int i = 0; i < N; i++) { // Announce Every Zombie
        horde[i].announce();
    }
    delete [] horde; // Delete The Horde
    return (0);
}