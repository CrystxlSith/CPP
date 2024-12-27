#include <iostream>
#include "Templates.hpp"

template<typename T>
void    printInfo(T & info) {
    std::cout << static_cast<T>(info) << std::endl;
}

template<typename T>
void iter(T* array, unsigned int length, void (*func)(T&)) {
    for (unsigned int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

int main( void )
{
    char a[] = {'a', 'b', 'c'};
    ::iter(a, 3, printInfo);
    int b[] = {1, 2, 3};
    ::iter(b, 3, printInfo);
    return 0;
}
