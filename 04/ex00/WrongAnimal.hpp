#pragma once

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal& operator=(WrongAnimal const &src);

    virtual void makeSound() const;
    std::string getType() const;
};


#endif //WrongAnimal_HPP