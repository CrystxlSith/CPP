#pragma once

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal(void);
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& copy);
    ~WrongAnimal();
    // Methods
    virtual void    makeSound(void) const;
    // Operator overloads
    WrongAnimal& operator=(WrongAnimal const& rhs);
    // Getters && Setters
    std::string getType(void) const;
    void    setType(std::string type);
};
