#include "MutantStack.hpp"

// Constructors
template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "\e[0;33mDefault Constructor called of MutantStack\e[0m" << std::endl;
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of MutantStack\e[0m" << std::endl;
}


// Destructor
template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "\e[0;31mDestructor called of MutantStack\e[0m" << std::endl;
}


// Operators
template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &assign)
{
    if (this != &assign)
        *this = assign;
    return *this;
}
