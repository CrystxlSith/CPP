#include "Fixed.hpp"
#include <cassert>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

// int main(void) {
//     Fixed a(10);
//     Fixed b(20);
//     Fixed c(10);
//     Fixed d(2.5f);

//     std::cout << "a: " << a << std::endl;
//     std::cout << "b: " << b << std::endl;
//     std::cout << "c: " << c << std::endl;
//     std::cout << "d: " << d << std::endl;

//     assert((a == b) == false);
//     assert((a == c) == true);
//     assert((a != b) == true);
//     assert((a != c) == false);
//     assert((a < b) == true);
//     assert((a > b) == false);
//     assert((a <= c) == true);
//     assert((a >= c) == true);
//     assert((d < a) == true);
//     assert((d > a) == false);

//     std::cout << "All assertions passed!" << std::endl;

//     return 0;
// }
