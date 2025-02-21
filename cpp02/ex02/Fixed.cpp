#include "Fixed.hpp"

Fixed::Fixed(/* args */) : _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixedPoint(n << Bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : _fixedPoint(roundf(f * (1 << Bits)))
{
    std::cout << "Float constructor called" << std::endl;
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

float   Fixed::toFloat( void ) const
{
    return (float)_fixedPoint / (float)(1 << Bits);
}

int     Fixed::toInt( void ) const
{
    return _fixedPoint >> Bits;
}

bool    Fixed::operator>( const Fixed& rSYM) const
{
    return (this->_fixedPoint > rSYM._fixedPoint);
}

bool    Fixed::operator<( const Fixed& rSYM) const
{
    return (this->_fixedPoint < rSYM._fixedPoint);
}

bool    Fixed::operator<=( const Fixed& rSYM) const
{
    return (this->_fixedPoint <= rSYM._fixedPoint);
}

bool    Fixed::operator>=( const Fixed& rSYM) const
{
    return (this->_fixedPoint >= rSYM._fixedPoint);
}

bool    Fixed::operator==( const Fixed& rSYM) const
{
    return (this->_fixedPoint == rSYM._fixedPoint);
}

bool    Fixed::operator!=( const Fixed& rSYM) const
{
    return (this->_fixedPoint != rSYM._fixedPoint);
}

Fixed   Fixed::operator+( const Fixed& rSYM) const
{
    Fixed   temp;
    temp.setRawBits(this->_fixedPoint + rSYM._fixedPoint);
    return ( temp );
}

Fixed   Fixed::operator-( const Fixed& rSYM) const
{
    Fixed   temp;
    temp.setRawBits(this->_fixedPoint - rSYM._fixedPoint);
    return ( temp );
}

Fixed   Fixed::operator*( const Fixed& rSYM) const
{
    Fixed   temp;
    temp.setRawBits((this->_fixedPoint * rSYM._fixedPoint) >> Bits);
    return ( temp );
}

Fixed   Fixed::operator/( const Fixed& rSYM) const
{
    Fixed   temp;
    temp.setRawBits((this->_fixedPoint << Bits) / rSYM._fixedPoint );
    return ( temp );
}

Fixed   Fixed::operator++( int )
{
    Fixed   temp(*this);
    operator++();
    return (temp);
}

Fixed&   Fixed::operator++( void )
{
    this->_fixedPoint++;
    return (*this);
}

Fixed   Fixed::operator--( int )
{
    Fixed   temp(*this);
    operator--();
    return (temp);
}

Fixed&   Fixed::operator--( void )
{
    this->_fixedPoint--;
    return (*this);
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}


// Fixed const &  Fixed::max(Fixed const &a, Fixed const &b)
// {
//     return (a > b ? a : b);
// }

Fixed&  Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}


Fixed const &  Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b ? a : b);
}

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym)
{
   o << rSym.toFloat();
   return o;
}