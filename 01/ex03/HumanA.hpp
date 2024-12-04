#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"


class HumanA {
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string t_name, Weapon &ref_weapon);
    ~HumanA();

    void attack(void);
};


#endif //HUMANA_HPP
