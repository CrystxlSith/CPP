#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    /* data */
public:
    ShrubberyCreationForm(/* args */);
    virtual ~ShrubberyCreationForm();

    virtual void executeForm( AForm const & form );
};


