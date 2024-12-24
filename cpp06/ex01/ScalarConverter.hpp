#pragma once

#include <iostream>

class ScalarConverter
{
private:
    ScalarConverter(/* args */);
    ~ScalarConverter();
public:
    static void convert(const std::string& literal);
};
