#pragma once

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:

public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &src);
    WrongCat& operator=(WrongCat const &src);

    virtual void makeSound() const;
};


#endif //WRONGCAP_HPP