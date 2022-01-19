//
// Created by Регина on 09.01.2022.
//

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor for Brain called" << std::endl;
}

Brain::Brain(Brain &brain)
{
    *this = brain;
    std::cout << "Constructor copy for Brain called" << std::endl;
}

Brain& Brain::operator=(const Brain &brain)
{
    *this = brain;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = brain.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor for Brain called" << std::endl;
}