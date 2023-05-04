#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain& ref)
{
    std::cout << "Brain copy constructor called!" << std::endl;
    for (int i = 0; i < numberOfIdeas; i++)
        ideas[i] = ref.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}

Brain& Brain::operator=(Brain const & ref)
{
    std::cout << "Assignement operator for Brain called" << std::endl;
    for (int i = 0; i < numberOfIdeas; i++)
        ideas[i] = ref.ideas[i];
    return *this; 
}