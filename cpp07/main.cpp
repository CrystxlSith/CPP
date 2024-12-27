#include <iostream>
#include "Templates.hpp"

template<typename T>
T const  max(T const & x, T const & y)
{
    return x>=y ? x : y;
}
template<typename T>
T const min(T const & x, T const & y)
{
    return x>=y ? y : x;
}

template<typename T>
void swap(T & a, T & b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     a = 1;
//     b = 2;
//     std::cout << "Max value : " << max(42, 87) << std::endl;
//     std::cout << "Min value : " << min(42, 87) << std::endl;
//     std::cout << "a value was " << a << "\n" << "b value was " << b << std::endl;
//     swap(a, b);
//     std::cout << "a value is now " << a << "\n" << "b value is now " << b << std::endl;
//     return 0;
// }
