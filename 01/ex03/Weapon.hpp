#pragma once
#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <string>
#include <iostream>
#include <stdexcept>

class Weapon {

private:
    std::string type;

public:
    Weapon(std::string t_type);
    void setType(std::string t_type);
    const std::string& getType(void);
};


#endif
