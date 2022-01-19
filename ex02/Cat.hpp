//
// Created by Регина on 08.01.2022.
//

#ifndef CPP_04_CAT_HPP
#define CPP_04_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(Cat &cat);
    virtual ~Cat();
    Cat &operator=(const Cat &cat);
    virtual void makeSound() const;
private:
    Brain *_brain;
};


#endif //CPP_04_CAT_HPP
