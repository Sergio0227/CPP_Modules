#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
private:

public:
    Dog();
    ~Dog();
    Dog(Dog const &src);
    Dog& operator=(Dog const &src);

    virtual void makeSound() const;
};


#endif //DOG_HPP