#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    virtual void  execute( Bureaucrat const & executor );

    RobotomyRequestForm& operator=(RobotomyRequestForm const &rSym);
};
