#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
private:

public:
    Cat();
    ~Cat();
    Cat(Cat const &src);
    Cat& operator=(Cat const &src);

    virtual void makeSound() const;
};


#endif //CAT_HPP