#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called" << std::endl;
    for (size_t i = 0; i < IDEAS; i++)
        ideas[i] = "NEW IDEA";
    shoutIdeas();
    printIdeas();

}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (size_t i = 0; i < IDEAS; i++)
        ideas[i] = copy.ideas[i];
    
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain&  Brain::operator=(Brain const& rhs)
{
    std::cout << "Brain copy assignement operator called" << std::endl;
    for (size_t i = 0; i < IDEAS; i++)
        ideas[i] = rhs.ideas[i];
    return *this;
}

void    Brain::shoutIdeas()
{
    const std::string randomThings[] = {
        "I'm so lonely :(",
        "I want friends",
        "It's ok i'm just a drug addict !",
        "My dad left to buy cigarettes, he will come back soon",
        "I wonder if clouds ever look down on us and say 'Hey look, that one is shaped like an idiot.'",
        "If a turtle doesn't have a shell, is it homeless or naked?",
        "Why do they call it 'chili' if it's hot?",
        "i hate my master but when i say it he gives me food",
        "I'm a dog in a cat's body",
        "I'm a cat in a dog's body",
        "I'm a cat in a cat's body",
        "I'm a dog in a dog's body",
        "Thinking about the yesterday's cat's rave party"
    };
    for (size_t i = 0; i < IDEAS; i++)
        this->ideas[i] = randomThings[rand() % 12];
}

void    Brain::printIdeas()
{
    for (size_t i = 0; i < IDEAS; i++)
        std::cout << "Idea " << i + 1 << ": " << this->ideas[i] << std::endl;
}