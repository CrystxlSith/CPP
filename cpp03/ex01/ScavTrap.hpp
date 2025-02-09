#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& scavtrap);
    ~ScavTrap(void);
    // OPERATOR OVERLOAD
    ScavTrap& operator=(const ScavTrap& scavtrap);

    // METHODS
    void    attack(std::string const & target);
    void    guardGate(void);
};



#endif