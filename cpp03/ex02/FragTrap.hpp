#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& fragtrap);
    virtual ~FragTrap(void);
    // OPERATOR OVERLOAD
    FragTrap& operator=(const FragTrap& fragtrap);
    // METHODS
    void    highFivesGuys(void);
};

#endif
