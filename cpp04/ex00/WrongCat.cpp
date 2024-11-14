#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy cosntructor called" << std::endl;
    this->_type = copy._type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Piou Piou?" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat& rhs)
{
    this->_type = rhs._type;
    return *this;
}