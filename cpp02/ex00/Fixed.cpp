#include "Fixed.hpp"

Fixed::Fixed(/* args */) : _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits( int const raw)
{
    _fixedPoint = raw;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPoint;
}

Fixed::Fixed(const Fixed& copie)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPoint = copie.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &copie)
{
    if (this != &copie)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_fixedPoint = copie.getRawBits();
        return *this;
    }
    return *this;
}
