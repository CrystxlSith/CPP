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

    bool    operator>( const Fixed& rSYM) const ;
    bool    operator<( const Fixed& rSYM) const ;
    bool    operator<=( const Fixed& rSYM) const ;
    bool    operator>=( const Fixed& rSYM) const ;
    bool    operator==( const Fixed& rSYM) const ;
    bool    operator!=( const Fixed& rSYM) const ;
    Fixed   operator+( const Fixed& rSYM) const ;
    Fixed   operator*( const Fixed& rSYM) const ;
    Fixed   operator-( const Fixed& rSYM) const ;
    Fixed   operator/( const Fixed& rSYM) const ;
    Fixed   operator++( int );
    Fixed   operator--( int );
    Fixed&   operator--( void );
    Fixed&  operator++( void );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed &copie);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
		static Fixed &			min(Fixed &a, Fixed &b);
		static Fixed const &	min(Fixed const &a, Fixed const &b);
		static Fixed &			max(Fixed &a, Fixed &b);
		static Fixed const &	max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);