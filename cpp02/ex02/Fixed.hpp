#include <iostream>
#include <cmath>


class Fixed
{
private:
    int _fixedPoint;
    static const int Bits = 8;
public:
    Fixed();
    Fixed( const int n );
    Fixed( const float f );
    Fixed(const Fixed& copie);
    ~Fixed();

    bool    operator>( const Fixed& rSYM);
    bool    operator<( const Fixed& rSYM);
    bool    operator<=( const Fixed& rSYM);
    bool    operator>=( const Fixed& rSYM);
    bool    operator==( const Fixed& rSYM);
    bool    operator!=( const Fixed& rSYM);
    Fixed   operator+( const Fixed& rSYM);

    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed &copie);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);