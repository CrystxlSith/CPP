#include "Zombie.hpp"

int main( void )
{
    int N = 42;
    std::string name = "HordeZombie";

    Zombie *horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++) {
        horde[i].announce();
        std::cout << i + 1 << std::endl;
    }
    delete [] horde;
    return (0);
}