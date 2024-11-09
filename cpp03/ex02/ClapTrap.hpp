#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& claptrap);
    ~ClapTrap();
    // SETTERS
    void   setName( std::string name );
    void   setHitpoints( int hitpoints );
    void   setEnergyPoints( int energyPoints );
    void   setAttackDamage( int attackDamage );
    // GETTERS
    std::string getName( void ) const;
    int   getHitpoints( void ) const;
    int   getEnergyPoints( void ) const;
    int   getAttackDamage( void ) const;
    // METHODS
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    // OPERATOR OVERLOAD
    ClapTrap& operator=(const ClapTrap& claptrap);
};

#endif