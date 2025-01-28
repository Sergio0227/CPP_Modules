#include <cstdlib>

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    int nb_animals = 10;
    Animal *animals[nb_animals];
    for (int i = 0; i < nb_animals; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        animals[i]->makeSound();
    }

    for (int i = 0; i < nb_animals; i++)
    {
        delete animals[i];
    }

    return 0;
}