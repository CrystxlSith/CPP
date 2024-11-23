#pragma once

#include "AForm.hpp"
#include "PresidentialForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
    /* data */
    static AForm*  createRobotomyRequest(std::string & target) { return new RobotomyRequestForm(target); };
    static AForm*  createPresidentialForm(std::string & target) { return new PresidentialForm(target); };
    static AForm*  createShrubberyCreation(std::string & target) { return new ShrubberyCreationForm(target); };
public:
    Intern(/* args */);
    Intern(const Intern &rSyn);
    ~Intern();

    // METHODS
    AForm*   makeForm(std::string const formName, std::string const target);

    // EXCEPTIONS
    class WrongNameException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Form name does not exist!";
        }
    };
};


