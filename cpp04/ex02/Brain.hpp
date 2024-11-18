#pragma once
#include "Cat.hpp"

#define IDEAS 100

class Brain
{
public:
    Brain(/* args */);
    Brain(const Brain& copy);
    ~Brain();

    std::string ideas[IDEAS];
    Brain& operator=(Brain const& rhs);

    void    shoutIdeas();
    void    printIdeas();
};


