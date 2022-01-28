//
// Created by Регина on 28.01.2022.
//

#ifndef CPP_04_WRONGANIMAL_HPP
#define CPP_04_WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &animal);
    WrongAnimal &operator=(const WrongAnimal &animal);
    void makeSound() const;
    virtual ~WrongAnimal();
    std::string getType() const;
private:
    std::string _type;
};


#endif //CPP_04_WRONGANIMAL_HPP
