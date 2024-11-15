#include "Cat.hpp"

int main()
{
    const Animal* animals[50];

    for (int i = 0; i < 50; i++)
        animals[i] = new Cat();
    for (int i = 0; i < 50; i++)
        animals[i]->makeSound();



    // const Animal* meta = new Animal();

    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << meta->getType() << " " << std::endl;
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // meta->makeSound();
    // j->makeSound();
    // i->makeSound(); //will output the cat sound!
    // delete meta;
    // delete j;
    // delete i;


// const WrongAnimal* meta = new WrongAnimal();

// const WrongAnimal* i = new WrongCat();
// std::cout << meta->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// meta->makeSound();
// i->makeSound(); //will output the cat sound!
// delete meta;
// delete i;

return 0;
}
