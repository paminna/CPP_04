//
// Created by Регина on 08.01.2022.
//
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal* animal[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            animal[i] = new Dog();
        }
        else
        {
            animal[i] = new Cat();
        }
    }
    for (int i = 0; i < 10; i++)
    {
        animal[i]->getType();
        animal[i]->makeSound();
    }
    delete *animal;
    delete j;//should not create a leak
    delete i;
}
