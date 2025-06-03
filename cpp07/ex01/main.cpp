#include <iostream>
#include "Templates.hpp"


template< typename T >
void print( T const & x ) {
     std::cout << x << std::endl; return; 
}

template<typename T>
void iter(T* array, unsigned int length, void (*func)(const T&)) {
    for (unsigned int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

void testCharArray() {
    char a[] = {'x', 'y', 'z'};
    std::cout << "Testing char array:" << std::endl;
    iter(a, 3, print);
}

void testIntArray() {
    int b[] = {10, 20, 30};
    std::cout << "Testing int array:" << std::endl;
    iter(b, 3, print);
}

void testDoubleArray() {
    double c[] = {1.1, 2.2, 3.3};
    std::cout << "Testing double array:" << std::endl;
    iter(c , 3, print);
}

void testStringArray() {
    std::string d[] = {"hello", "world", "test"};
    std::cout << "Testing string array:" << std::endl;
    iter(d, 3, print);
}

int main() {
    testCharArray();
    testIntArray();
    testDoubleArray();
    testStringArray();
    return 0;
}
