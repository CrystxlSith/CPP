#include "Form.hpp"

Form::Form(/* args */) : _gradeExec(0), _gradeSign(0), _signed(0)
{
}

Form::Form( std::string& name, int gradeToSign, int gradeToExec ) : _gradeExec(gradeToExec), _gradeSign(gradeToSign), _name(name), _signed(0)
{
    if (gradeToSign > MINGRADE)
        throw Form::GradeTooLowException();
    else if (gradeToSign < MAXGRADE)
        throw Form::GradeTooHighException();
    if (gradeToExec > MINGRADE)
        throw Form::GradeTooLowException();
    else if (gradeToExec < MAXGRADE)
        throw Form::GradeTooHighException();
}

Form::Form( const Form& rhs ) : _name(rhs._name), _gradeExec(rhs._gradeExec), _signed(rhs._signed), _gradeSign(rhs._gradeSign)
{
    *this = rhs;
}

Form::~Form()
{
}

Form    &Form::operator=(const Form &rhs)
{
    if (this == &rhs)
        return *this;
    this->_signed = rhs._signed;
    return *this;
}
