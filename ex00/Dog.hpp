//
// Created by Регина on 08.01.2022.
//

#ifndef CPP_04_DOG_HPP
#define CPP_04_DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
    Dog();
    Dog(Dog &dog);
    Dog &operator=(const Dog &dog);
    ~Dog();
    virtual void makeSound() const;
};


#endif //CPP_04_DOG_HPP
