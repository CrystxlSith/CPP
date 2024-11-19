#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : _name("No one"), _grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string& name, int grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade > MINGRADE)
        throw Bureaucrat::GradeTooLowException();
    if (grade < MAXGRADE)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade()
{
  std::cout << "[Bureaucrat] Copy constructor called." << std::endl;
  *this = other;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
  std::cout << "[Bureaucrat] Copy assignment called." << std::endl;
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

unsigned int Bureaucrat::getGrade(int grade) const
{
    return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

Bureaucrat& Bureaucrat::operator<<(Bureaucrat const& rhs)
{
    std::cout << "Bureaucrat operator<< called" << std::endl;
    return *this;
}