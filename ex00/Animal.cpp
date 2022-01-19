//
// Created by Регина on 08.01.2022.
//

#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Constructor for Animal called" <<std::endl;
}

Animal::Animal(Animal &animal)
{
    _type = animal.getType();
    std::cout << "Constructor copy for Animal called" <<std::endl;
}

Animal& Animal::operator=(const Animal &animal)
{
    this->_type = animal._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called" <<std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Some sound of animal" << std::endl;
}

std::string Animal::getType() const
{
    return(_type);
}