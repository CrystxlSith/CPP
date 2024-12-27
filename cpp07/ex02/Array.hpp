#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <stdexcept>
// # include "Array.cpp"

template <typename T>
class Array
{
	private:
		T* _array;
		unsigned int _size;
		
	public:
		// Constructors
		Array();
    	Array(const Array<T>& copy);
		Array(unsigned int n);

		// Destructor
		~Array();

		// Methods
		unsigned int getSize() const;

		// Operators
		Array<T>& operator=(const Array<T>& assign);
		T& 		operator[](unsigned int index);		
		// Exceptions
		class outOfRange : public std::exception {
			virtual const char* what() const throw() ;
		};
		
};

#endif