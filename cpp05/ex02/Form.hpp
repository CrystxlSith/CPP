#pragma once

#include <iostream>
#include <stdlib.h>
#define MAXGRADE 1
#define MINGRADE 150

class Form
{
private:
    const unsigned int _gradeSign;
    const std::string   _name;
    bool                _signed;
    const unsigned int  _gradeExec;
public:
    Form(/* args */);
    Form( std::string& name, int gradeToSign, int gradeToExec );
    Form( const Form& rhs);
    ~Form();

    // GETTERS
    std::string     getName() const { return _name; }
    unsigned int    getGradeSign() const { return _gradeSign; }
    unsigned int    getGradeExec() const { return _gradeExec; }
    bool            getSignature() const { return _signed; }
    Form& operator=(Form const& rhs);
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
};

