#pragma once

#include "Dog.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* _brain;
public:
    Cat(void);
    Cat(const Cat& copy);
    virtual ~Cat();
    // METHODS
    virtual void makeSound(void) const;
    // OPERATOR OVERLOAD
    Cat& operator=(Cat const& rhs);
};

