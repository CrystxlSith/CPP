#pragma once

#include "Animal.hpp"

class Dog : virtual public Animal
{
private:
    /* data */
public:
    Dog(void);
    Dog(std::string type);
    Dog(const Dog& copy);
    ~Dog();
    // Dog(std::string name);
    //METHODS
    void    makeSound(void) const;
    // OPERATOR OVERLOAD
    Dog& operator=(Dog const& rhs);
};


