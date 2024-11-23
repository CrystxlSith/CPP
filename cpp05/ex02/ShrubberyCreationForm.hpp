#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    Bureaucrat& _target;
public:
    ShrubberyCreationForm(Bureaucrat & target);
    virtual ~ShrubberyCreationForm();

    virtual void execute( Bureaucrat const & executor );
};


