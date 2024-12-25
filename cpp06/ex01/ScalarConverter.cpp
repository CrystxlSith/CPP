#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
    std::cout << "{1} ScalarConvertor Constructor Called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "{1} ScalarConvertor Destructor Called" << std::endl;
}

void    charConvert( const std::string& c )
{

    std::cout << "char: '" << static_cast<char>(c[0]) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(c[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c[0]) << ".0" << std::endl;

}

void    floatConvert( const std::string& literal )
{
    float f = atof(literal.c_str());
    if (f < 0 || f > 127)
        std::cout << "char: impossible" << std::endl;
    else if (f < 32 || f == 127)
        std:: cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f  << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void    doubleConvert( const std::string& literal )
{
    double f = atof(literal.c_str());
    if (f < 0 || f > 127)
        std::cout << "char: impossible" << std::endl;
    else if (f < 32 || f == 127)
        std:: cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f  << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void    checkInput( const std::string& literal )
{
    if ((std::isprint(literal[0])) && (!std::isdigit(literal[0])))
    {
        if (literal.length() == 1)
            charConvert(literal);
    }
    else if (literal[literal.length() - 1] == 'f')
        floatConvert(literal);
    else if (literal.find('.') != std::string::npos)
        doubleConvert(literal);
}

void    ScalarConverter::convert( const std::string& litertal )
{
    checkInput(litertal);
}