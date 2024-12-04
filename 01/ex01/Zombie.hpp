#pragma once
#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP
#include <string>
#include <iostream>
#include <stdexcept>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    Zombie(std::string t_name);
    ~Zombie(void);
    void announce(void);
    void set_name(std::string name);
};


#endif
