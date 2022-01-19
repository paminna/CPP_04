#include <__bit_reference>
//
// Created by Регина on 08.01.2022.
//

#include "Dog.hpp"

Dog::Dog(): Animal::Animal()
{
    _type = "Dog";
    std::cout << "Constructor for Dog called" << std::endl;
}

Dog::Dog(Dog &dog) {
    _type = dog.getType();
    std::cout << "Constructor copy for Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
    this->_type = dog.getType();
    return *this;
}


void Dog::makeSound() const
{
    std::cout << "Wooooof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog called" << std::endl;
}
