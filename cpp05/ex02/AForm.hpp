#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <stdlib.h>
#define MAXGRADE 1
#define MINGRADE 150

class AForm
{
private:
    const unsigned int _gradeSign;
    const std::string   _name;
    bool                _signed;
    const unsigned int  _gradeExec;
public:
    AForm(/* args */);
    AForm( const std::string& name, int gradeToSign, int gradeToExec );
    AForm( const AForm& rhs);
    ~AForm();

    // METHODS
    void    beSigned(const Bureaucrat& rhs);
    virtual void    executeForm(AForm const & form) = 0;

    // GETTERS
    std::string     getName() const { return _name; }
    unsigned int    getGradeSign() const { return _gradeSign; }
    unsigned int    getGradeExec() const { return _gradeExec; }
    bool            getSignature() const { return _signed; }
    
    // EXCEPTIONS 
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Grade is too high";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Grade is too low";
            }
    };

    // OPERATOR OVERLOAD
    AForm& operator=(AForm const& rhs);
};

std::ostream& operator<<(std::ostream& os, const AForm& Bur); // Output stream operator

