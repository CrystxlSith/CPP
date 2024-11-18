#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : public AAnimal
{
private:
    Brain* _brain;
public:
    Dog(void);
    Dog(const Dog& copy);
    virtual ~Dog();
    //METHODS
    virtual void    makeSound(void) const;
    // OPERATOR OVERLOAD
    Dog& operator=(Dog const& rhs);
};
