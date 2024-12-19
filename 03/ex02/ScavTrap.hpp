#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include "iostream"
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
private:
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