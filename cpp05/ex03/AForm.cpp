#include "AForm.hpp"

AForm::AForm(/* args */) : _gradeSign(150), _name("base AForm"), _signed(false), _gradeExec(150)  {}

AForm::AForm( const std::string& name, int gradeToSign, int gradeToExec ) : _gradeSign(gradeToSign), _name(name), _signed(false), _gradeExec(gradeToExec)
{
    if (gradeToSign > MINGRADE)
        throw AForm::GradeTooLowException();
    else if (gradeToSign < MAXGRADE)
        throw AForm::GradeTooHighException();
    if (gradeToExec > MINGRADE)
        throw AForm::GradeTooLowException();
    else if (gradeToExec < MAXGRADE)
        throw AForm::GradeTooHighException();
}

AForm::AForm( const AForm& rhs ) : _gradeSign(rhs._gradeSign), _name(rhs._name), _signed(rhs._signed), _gradeExec(rhs._gradeExec)
{
    *this = rhs;
}

AForm::~AForm() {}

AForm    &AForm::operator=(const AForm &rhs)
{
    if (this == &rhs)
        return *this;
    this->_signed = rhs._signed;
    return *this;
}

void     AForm::beSigned(const Bureaucrat& rhs)
{
    if (rhs.getGrade() <= this->getGradeSign())
    {
        this->_signed = true;
        rhs.signForm(this->_signed, this->getName());
    }
    else
        throw AForm::GradeTooLowException();
}


std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    if (AForm.getSignature() == true)
        os << AForm.getName() << " is signed";
    else
        os << AForm.getName() << " is not signed";
    return os;
}
