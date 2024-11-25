#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string& _target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

    virtual void execute( Bureaucrat const & executor );
};

