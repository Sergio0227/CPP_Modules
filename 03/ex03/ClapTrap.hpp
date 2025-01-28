#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {

protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    static const int _maxHitPoints = 100;
    static const int _maxEnergyPoints = 50;
    static const int _maxAttackDamage = 20;

public:
    ClapTrap(void);
    ClapTrap(const std::string &name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);
    ClapTrap &operator=(ClapTrap const &src);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif //CLAPTRAP_HPP
