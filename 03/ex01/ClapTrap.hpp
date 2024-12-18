#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {

private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap(void);
    ClapTrap(const std::string &name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);
    ClapTrap &operator=(ClapTrap const &src);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName();
    void setName(std::string name);
    int getHitPoints(void);
    void setHitPoints(int hitPoints);
    int getEnergyPoints(void);
    void setEnergyPoints(int energyPoints);
    int getAttackDamage(void);
    void setAttackDamage(int attackDamage);
};

#endif //CLAPTRAP_HPP