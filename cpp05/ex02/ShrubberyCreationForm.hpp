#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    Bureaucrat& _target;
public:
    ShrubberyCreationForm(Bureaucrat & target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

    virtual void execute( Bureaucrat const & executor );
};

