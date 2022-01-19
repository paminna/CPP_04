//
// Created by Регина on 09.01.2022.
//

#ifndef CPP_04_BRAIN_HPP
#define CPP_04_BRAIN_HPP


#include <iostream>

class Brain {
public:
    Brain();
    Brain(Brain &brain);
    Brain &operator=(const Brain &brain);
    ~Brain();
    std::string ideas[100];
};


#endif //CPP_04_BRAIN_HPP
