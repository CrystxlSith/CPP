#include "Form.hpp"

Form::Form(/* args */) : _gradeSign(150), _name("base form"), _signed(false), _gradeExec(150)  {}

Form::Form( std::string& name, int gradeToSign, int gradeToExec ) : _gradeSign(gradeToSign), _name(name), _signed(false), _gradeExec(gradeToExec)
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

Form::Form( const Form& rhs ) : _gradeSign(rhs._gradeSign), _name(rhs._name), _signed(rhs._signed), _gradeExec(rhs._gradeExec)
{
    *this = rhs;
}

Form::~Form() {}

Form    &Form::operator=(const Form &rhs)
{
    if (this == &rhs)
        return *this;
    this->_signed = rhs._signed;
    return *this;
}

void     Form::beSigned(const Bureaucrat& rhs)
{
    if (rhs.getGrade() <= this->getGradeSign())
    {
        this->_signed = true;
        rhs.signForm(this->_signed, this->getName());
    }
    else
        throw Form::GradeTooLowException();
}


std::ostream& operator<<(std::ostream& os, const Form& form)
{
    if (form.getSignature() == true)
        os << form.getName() << " is signed";
    else
        os << form.getName() << " is not signed";
    return os;
}
