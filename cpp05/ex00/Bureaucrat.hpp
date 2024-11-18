#pragma once

#include <iostream>
#include <stdlib.h>

#define MINGRADE 150
#define MAXGRADE 1

class Bureaucrat
{
private:
    std::string const _name;
    unsigned int _grade;
public:
    Bureaucrat(); // Default constructor
    Bureaucrat(std::string& name, unsigned int grade);  // Constructor with parameters
    ~Bureaucrat(); // Destructor
    // GETTERS AND SETTERS
    void setName(std::string name); // Set name
    void setGrade(int grade); // Set grade
    void getName(void); // Get name
 
    // OPERATOR OVERLOAD
    Bureaucrat& operator<<(Bureaucrat const& rhs); // Assignment operator
};

