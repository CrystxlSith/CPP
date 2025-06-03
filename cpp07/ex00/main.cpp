#include <iostream>
#include "Templates.hpp"

template<typename T>
T const  max(T const & x, T const & y)
{
    return x >= y ? x : y;
}
template<typename T>
T const min(T const & x, T const & y)
{
    return x >= y ? y : x;
}

template<typename T>
void swap(T & a, T & b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


// int main(void)
// {
//     // Création d'objets pour les tests
//     Awesome a(2), b(4), c(2);
    
//     // Test de l'opérateur de sortie stream
//     std::cout << "Valeurs initiales: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    
//     // Test des opérateurs de comparaison
//     std::cout << "\nTests des opérateurs de comparaison:" << std::endl;
//     std::cout << "a == c: " << (a == c) << " (devrait être 1)" << std::endl;
//     std::cout << "a != b: " << (a != b) << " (devrait être 1)" << std::endl;
//     std::cout << "a > b: " << (a > b) << " (devrait être 0)" << std::endl;
//     std::cout << "a < b: " << (a < b) << " (devrait être 1)" << std::endl;
//     std::cout << "a >= c: " << (a >= c) << " (devrait être 1)" << std::endl;
//     std::cout << "b <= a: " << (b <= a) << " (devrait être 0)" << std::endl;
    
//     // Test de l'opérateur d'affectation
//     std::cout << "\nTest de l'opérateur d'affectation:" << std::endl;
//     a = b;
//     std::cout << "Après a = b, a = " << a << " (devrait être 4)" << std::endl;
    
//     // Test des fonctions template avec Awesome
//     std::cout << "\nTests des fonctions template:" << std::endl;
//     Awesome d(5), e(3);
//     std::cout << "d = " << d << ", e = " << e << std::endl;
    
//     // Test de swap
//     swap(d, e);
//     std::cout << "Après swap: d = " << d << ", e = " << e << std::endl;
    
//     // Test de max et min
//     std::cout << "max(d, e) = " << max(d, e) << " (devrait être 5)" << std::endl;
//     std::cout << "min(d, e) = " << min(d, e) << " (devrait être 3)" << std::endl;
    
//     return (0);
// }

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
