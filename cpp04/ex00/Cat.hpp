#include "Dog.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat& copy);
    virtual ~Cat();
    // METHODS
    virtual void makeSound(void) const;
    // OPERATOR OVERLOAD
    Cat& operator=(Cat const& rhs);
};

