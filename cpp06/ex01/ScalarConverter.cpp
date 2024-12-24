#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
    std::cout << "{1} ScalarConvertor Constructor Called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "{1} ScalarConvertor Destructor Called" << std::endl;
}

void    checkInput( const std::string& literal)
{
    if ((literal[0] > 6 && literal[0] < 127) && (!std::isdigit()))
    {
        if (literal.length() == 1)
        {
            std::cout << "it s a char!" << std::endl;
            std::cout << static_cast<int>(literal[0]) << std::endl;
        }
    }
}

void    ScalarConverter::convert( const std::string& litertal )
{
    checkInput(litertal);
}