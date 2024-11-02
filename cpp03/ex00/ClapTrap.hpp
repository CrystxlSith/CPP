#include <iostream>
#include <cstdlib>

class ClapTrap
{
private:
    std::string _name;
    int _hitpoints;
    int _energyPoints;
    int _attackDamage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
};
