#pragma once

#ifndef ICE_HPP
#define ICE_HPP
#include <string>
#include <iostream>

#include "AMateria.hpp"


class Ice :AMateria{
private:
    std::string type;

public:
    Ice();
    ~Ice();
    Ice(Ice const &src);
    Ice& operator=(Ice const &src);
};


#endif //ICE_HPP