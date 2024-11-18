#pragma once

#include <iostream>
#include <stdlib.h>
#include <iterator>

class Animal
{
protected:
    std::string _type;
public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal& copy);
    virtual ~Animal();
    // Methods
    virtual void    makeSound(void) const;
    // Operator overloads
    Animal& operator=(Animal const& rhs);
    // Getters && Setters
    std::string getType(void) const;
    void    setType(std::string type);
};
