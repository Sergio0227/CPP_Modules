#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap& operator=(DiamondTrap const &src);

    void attack(std::string const &target);
    void whoAmI();
};


#endif //DIAMONDTRAP_HPP