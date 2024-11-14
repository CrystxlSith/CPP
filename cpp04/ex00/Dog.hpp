#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(void);
    Dog(const Dog& copy);
    virtual ~Dog();
    //METHODS
    virtual void    makeSound(void) const;
    // OPERATOR OVERLOAD
    Dog& operator=(Dog const& rhs);
};


