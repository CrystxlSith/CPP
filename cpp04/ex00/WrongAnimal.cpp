#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal string copy called" << std::endl;
    this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal copy cosntructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
        std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "i'm not really an animal i can't make coherent any sounds" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
    this->_type = rhs._type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->_type;
}

void    WrongAnimal::setType(std::string type)
{
    this->_type = type;
}
