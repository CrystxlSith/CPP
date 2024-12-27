#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void    printInfo(T & info);

template<typename T>
void iter(T* array, unsigned int length, void (*func)(T&));

#endif