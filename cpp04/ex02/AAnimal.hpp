#pragma once

#include <iostream>
#include <stdlib.h>
#include <iterator>

class AAnimal
{
protected:
    std::string _type;
public:
    AAnimal(void);
    AAnimal(std::string type);
    AAnimal(const AAnimal& copy);
    virtual ~AAnimal();
    // Methods
    virtual void    makeSound(void) const = 0;
    // Operator overloads
    AAnimal& operator=(AAnimal const& rhs);
    // Getters && Setters
    virtual std::string getType(void) const;
    void    setType(std::string type);
};
