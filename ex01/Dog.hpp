//
// Created by Регина on 08.01.2022.
//

#ifndef CPP_04_DOG_HPP
#define CPP_04_DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(Dog &dog);
    Dog &operator=(const Dog &dog);
    virtual ~Dog();
    virtual void makeSound() const;
private:
    Brain *_brain;
};


#endif //CPP_04_DOG_HPP
