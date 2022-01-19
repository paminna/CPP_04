//
// Created by Регина on 08.01.2022.
//

#include "Animal.hpp"

Animal& Animal::operator=(const Animal &animal)
{
    this->_type = animal._type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Some sound of animal" << std::endl;
}

std::string Animal::getType() const
{
    return(_type);
}