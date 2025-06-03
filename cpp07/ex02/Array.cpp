#include "Array.hpp"

// Constructors
template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &copy) : _array(new T[copy._size]), _size(copy._size)
{
    for (unsigned int i = 0; i < _size; ++i)
    {
        _array[i] = copy._array[i];
    }
	std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) 
{
	std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
}

template <class T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
    {
        throw outOfRange();
    }
    return _array[index];
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> &assign)
{
    if (this != &assign)
    {
        delete[] _array;
        _size = assign._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
        {
            _array[i] = assign._array[i];
        }
    }
	return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}
