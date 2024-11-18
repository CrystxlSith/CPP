#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string& name, unsigned int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator<<(Bureaucrat const& rhs)
{
    std::cout << "Bureaucrat operator<< called" << std::endl;
    return *this;
}