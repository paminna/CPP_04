//
// Created by Регина on 28.01.2022.
//

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "Constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat &cat)
{
    _type = cat.getType();
    std::cout << "Constructor copy for WrongCat called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
    this->_type = cat.getType();
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "Meoooow" << std::endl;
}

std::string WrongCat::getType() const
{
    return (_type);
}
