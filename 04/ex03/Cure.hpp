#pragma once

#ifndef CURE_HPP
#define CURE_HPP
#include <string>
#include <iostream>

#include "AMateria.hpp"


class Cure : AMateria{
private:
    std::string type;

public:
    Cure();
    ~Cure();
    Cure(Cure const &src);
    Cure& operator=(Cure const &src);
};


#endif //CURE_HPP