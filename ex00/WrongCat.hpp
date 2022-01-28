//
// Created by Регина on 28.01.2022.
//

#ifndef CPP_04_WRONGCAT_HPP
#define CPP_04_WRONGCAT_HPP


#include<iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
    WrongCat();
    WrongCat(WrongCat &cat);
    WrongCat &operator=(const WrongCat &cat);
    void makeSound() const;
    ~WrongCat();
    std::string getType() const;
private:
    std::string _type;
};

#endif //CPP_04_WRONGCAT_HPP
