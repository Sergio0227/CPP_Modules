#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include "iostream"
#include "ClapTrap.hpp"


class ScavTrap : public virtual ClapTrap {
protected:
    static const int _maxHitPoints = 100;
    static const int _maxEnergyPoints = 50;
    static const int _maxAttackDamage = 20;
    bool _gateKeeper;

public:
    ScavTrap(void);
    ScavTrap(std::string const &name);
    virtual ~ScavTrap(void);
    ScavTrap(ScavTrap const &src);
    ScavTrap& operator=(ScavTrap const &src);

    void attack(const std::string& target);
    void guardGate();
};


#endif //SCAVTRAP_HPP