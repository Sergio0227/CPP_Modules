#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string t_name);
    ~HumanB();

    void attack(void);
    void setWeapon(Weapon &ref_weapon);
};



#endif //HUMANB_HPP
