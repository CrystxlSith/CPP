#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP


#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <limits.h>

class ScalarConverter
{
private:
	// Constructors
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	
	// Destructor
	~ScalarConverter();
	
	// Operators
	ScalarConverter & operator=(const ScalarConverter &assign);
public:
    static void convert(const std::string& literal);
};

#endif