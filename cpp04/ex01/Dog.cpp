#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
    std::cout << "Dog copy cosntructor called" << std::endl;
    this->_type = copy._type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void    Dog::makeSound(void) const
{
    std::cout << "BARK BARK BARK" << std::endl;
}

Dog&    Dog::operator=(const Dog& rhs)
{
    this->_type = rhs._type;
    return *this;
}