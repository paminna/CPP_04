//
// Created by Регина on 28.01.2022.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "Animal";
    std::cout << "Constructor for Animal called" <<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &animal)
{
    _type = animal.getType();
    std::cout << "Constructor copy for Animal called" <<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal)
{
    this->_type = animal._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal called" <<std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some sound of animal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(_type);
}