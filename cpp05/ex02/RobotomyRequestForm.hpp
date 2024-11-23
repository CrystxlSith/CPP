#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    Bureaucrat& _target;
public:
    RobotomyRequestForm(Bureaucrat & target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    virtual void  execute( Bureaucrat const & executor );

    RobotomyRequestForm& operator=(RobotomyRequestForm const &rSym);
};
