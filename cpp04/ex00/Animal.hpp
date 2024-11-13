#pragma once

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal& copy);
    ~Animal();
    // Methods
    void    makeSound(void) const;
    // Operator overloads
    Animal& operator=(Animal const& rhs);
    // Getters && Setters
    std::string getType(void) const;
    void    setType(std::string type);
};
