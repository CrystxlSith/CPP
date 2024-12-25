#pragma once

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
private:
    ScalarConverter(/* args */);
    ~ScalarConverter();
public:
    static void convert(const std::string& literal);
};
