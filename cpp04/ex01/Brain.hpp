#pragma once
#include "Cat.hpp"

class Brain
{
public:
    Brain(/* args */);
    ~Brain();

    std::string ideas[100];
    Brain& operator=(Brain const&rhs);
};


