#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal string copy called" << std::endl;
    this->_type = type;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy cosntructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
        std::cout << "Animal constructor called" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "i'm just an animal" << std::endl;
}

Animal& Animal::operator=(Animal const& rhs)
{
    this->_type = rhs._type;
    return *this;
}

std::string Animal::getType(void) const
{
    return this->_type;
}

void    Animal::setType(std::string type)
{
    this->_type = type;
}
