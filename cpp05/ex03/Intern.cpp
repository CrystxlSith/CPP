#include "Intern.hpp"

Intern::Intern(/* args */)
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern( const Intern &rSym)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = rSym;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

AForm*  Intern::makeForm(std::string const formName, std::string target)
{
    AForm * (*formCreator[3])(std::string&) = {
        createRobotomyRequest, 
        createShrubberyCreation,
        createPresidentialForm,
    };
    const std::string forms[3] = {
        "robotomy request", 
        "shrubbery creation",
        "presidential form",
    };
    for (size_t i = 0; i < 3; i++)
    {
        if (forms[i] == formName)
        {
            std::cout << "intern create " << formName << std::endl;
            return (formCreator[i](target));
        }
    }
    throw Intern::WrongNameException();
    
}
