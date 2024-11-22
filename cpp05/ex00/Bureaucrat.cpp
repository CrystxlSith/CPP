#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : _name("No one"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string& name, int grade) : _name(name)
{
    if (grade > MINGRADE)
        throw Bureaucrat::GradeTooLowException();
    if (grade < MAXGRADE)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade()
{
  *this = other;
}


Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
  if (this == &other)
    return *this;
  this->_grade = other._grade;
  return *this;
}
void Bureaucrat::incrementGrade(void)
{
    if (this->_grade - 1 < MAXGRADE)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade + 1 > MINGRADE)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

unsigned int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

void    Bureaucrat::signForm(const bool &signature, std::string &nameForm) const
{
    if (signature == true)
        std::cout << this->_name << " signed " << nameForm << std::endl;
    else
        std::cout << this->_name << "couldn't sign" << nameForm << " because he don't have the rights to do this" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur)
{
    os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return os;
}