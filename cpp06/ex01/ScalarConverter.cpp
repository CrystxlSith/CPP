#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
    std::cout << "{1} ScalarConvertor Constructor Called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "{1} ScalarConvertor Destructor Called" << std::endl;
}

void    cConv( const std::string& c )
{

    std::cout << "char: '" << static_cast<char>(c[0]) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(c[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c[0]) << ".0" << std::endl;

}

void    fConv( const std::string& literal )
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

void    dConv( const std::string& literal )
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
    std::cout << "float: " << static_cast<float>(f)  << "f" << std::endl;
    std::cout << "double: " << f << std::endl;
}

void    iConv( const std::string& literal )
{
    int f = atof(literal.c_str());
    if (f < 0 || f > 127)
        std::cout << "char: impossible" << std::endl;
    else if (f < 32 || f == 127)
        std:: cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    std::cout << "int: " << f << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(f)  << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void    maxConv()
{
    std::cout << "char: Impossible" << std::endl;
    std::cout << INT_MAX << std::endl;
    std::cout << __FLT_MAX__ << std::endl;
    std::cout << __DBL_MAX__ << std::endl;
}

void    minConv()
{
    std::cout << "char: Impossible" << std::endl;
    std::cout << INT_MAX << std::endl;
    std::cout << __FLT_MIN__ << std::endl;
    std::cout << __DBL_MIN__ << std::endl;
}

void    nanConv()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;   
}

void    printError()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << 0 << std::endl;
	std::cout << "float: " << 0 << std::endl;
	std::cout << "double: " << 0 << std::endl;
}

void    checkInput( const std::string& literal )
{
    if ((std::isprint(literal[0])) && (!std::isdigit(literal[0])))
    {
        if (literal.length() == 1)
            cConv(literal);
        else if (literal == "+inf")
            maxConv();
        else if (literal == "-inf")
            minConv();
        else if (literal == "nan")
            nanConv();
        else
            printError();
    }
    else if (literal[literal.length() - 1] == 'f')
    {
		long unsigned int	i = 0;
		while (i < literal.length() - 1 && (std::isdigit(literal[i]) || literal[i] == '.'))
			i++;
        if (i == literal.length() - 1)
            fConv(literal);
        else
            printError();
    }
    else if (literal.find('.') != std::string::npos)
    {
		long unsigned int	i = 0;
		while (std::isdigit(literal[i]) || literal[i] == '.')
			i++;
		if (i == literal.length())
			dConv(literal);
        else
            printError();
    }
    else if (std::isdigit(literal[0]))
    {
		long unsigned int	i = 0;
		while (std::isdigit(literal[i]))
			i++;
		if (i == literal.length())
			iConv(literal);
        else
            printError();
    }
    else
        printError();
}

void    ScalarConverter::convert( const std::string& litertal )
{
    checkInput(litertal);
}