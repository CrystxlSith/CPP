#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
// private:
//     Brain* Brain;
public:
    Dog(void);
    Dog(const Dog& copy);
    virtual ~Dog();
    //METHODS
    virtual void    makeSound(void) const;
    // OPERATOR OVERLOAD
    Dog& operator=(Dog const& rhs);
};


