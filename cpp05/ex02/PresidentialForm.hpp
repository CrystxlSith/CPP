#pragma once

#include "AForm.hpp"

class PresidentialForm : public AForm
{
private:
    Bureaucrat& _target;
public:
    PresidentialForm(Bureaucrat & target);
    PresidentialForm(PresidentialForm const &src);
    virtual ~PresidentialForm();

    virtual void    execute( Bureaucrat const & executor );

    PresidentialForm& operator=(PresidentialForm const &rsym);
};


