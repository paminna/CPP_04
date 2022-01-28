//
// Created by Регина on 08.01.2022.
//

#include "Cat.hpp"
Cat::Cat()
{
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
    std::cout << "Destructor for Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    this->_type = cat.getType();
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meoooow" << std::endl;
}
