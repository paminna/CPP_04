//
// Created by Регина on 08.01.2022.
//
#include "Cat.hpp"
Cat::Cat()
{
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
    {
        _brain->ideas[i] = "Cat's idea number " + std::to_string(i + 1);
    }
    _type = "Cat";
    std::cout << "Constructor for Cat called" << std::endl;
}

Cat::Cat(Cat &cat)
{
    _type = cat.getType();
    std::cout << "Constructor copy for Cat called" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor for Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    this->_type = cat.getType();
    return cat;
}

void Cat::makeSound() const{
    std::cout << "Meoooow" << std::endl;
}
