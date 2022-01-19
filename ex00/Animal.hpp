//
// Created by Регина on 08.01.2022.
//

#ifndef CPP_04_ANIMAL_HPP
#define CPP_04_ANIMAL_HPP
#include <iostream>

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual void makeSound() const;
    std::string getType() const;
protected:
    std::string _type;
};


#endif //CPP_04_ANIMAL_HPP
