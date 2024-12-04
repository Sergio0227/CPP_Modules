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
    void set_type(std::string t_type);
    std::string get_type(void);
};


#endif
