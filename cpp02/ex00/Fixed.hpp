#include <iostream>


class Fixed
{
private:
    int _fixedPoint;
    static const int Bits = 8;
public:
    Fixed(/* args */);
    Fixed(const Fixed& copie);
    ~Fixed();
    Fixed& operator=(const Fixed &copie);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

