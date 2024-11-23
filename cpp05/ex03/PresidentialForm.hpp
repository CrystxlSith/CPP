#pragma once

#include "AForm.hpp"

class PresidentialForm : public AForm
{
private:
    std::string& _target;
public:
    PresidentialForm(std::string & target);
    PresidentialForm(PresidentialForm const &src);
    virtual ~PresidentialForm();

    virtual void    execute( Bureaucrat const & executor );

    PresidentialForm& operator=(PresidentialForm const &rsym);
};


