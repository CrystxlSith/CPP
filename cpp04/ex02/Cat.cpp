#include "Cat.hpp"

Cat::Cat(/* args */) : AAnimal("Cat"), _brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy), _brain(new Brain(*copy._brain))
{
    std::cout << "Cat copy cosntructor called" << std::endl;
    this->_type = copy._type;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meouw" << std::endl;
}

Cat&    Cat::operator=(const Cat& rhs)
{
    this->_type = rhs._type;
    return *this;
}