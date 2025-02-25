#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(const WrongCat& copy);
    virtual ~WrongCat();
    // METHODS
    virtual void makeSound(void) const;
    // OPERATOR OVERLOAD
    WrongCat& operator=(WrongCat const& rhs);
};

