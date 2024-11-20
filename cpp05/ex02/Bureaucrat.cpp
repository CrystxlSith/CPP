#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : _name("No one"), _grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
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

/**
 * @brief Overloads the insertion operator to output the details of a Bureaucrat object.
 *
 * This operator allows you to use the << operator to print the name and grade of a Bureaucrat object
 * in the format: "name, bureaucrat grade grade".
 *
 * @param os The output stream to which the Bureaucrat details will be written.
 * @param bur The Bureaucrat object whose details are to be printed.
 * @return A reference to the output stream.
 */
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur)
{
    os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return os;
}