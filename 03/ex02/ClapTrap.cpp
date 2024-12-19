#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unknown"), _energyPoints(50),
                                       _hitPoints(100), _attackDamage(20)
{
    std::cout << "ClapTrap Constructor called, " << this->_name << " Claptrap created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _energyPoints(50),
                                              _hitPoints(100), _attackDamage(20)
{
    std::cout << "ClapTrap Constructor called, " << this->_name << " Claptrap created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref)
{
    std::cout << "ClapTrap Copy constructor called, " << ref._name << " Claptrap was copied" << std::endl;
    *this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy assignement operator called, " << src._name << " Claptrap was copied" << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called, " << this->_name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints && this->_hitPoints)
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
                    << " points of damage!" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " couldnt attack, no energy points left or hit points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage" << std::endl;
        this->_hitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints && this->_hitPoints)
    {
        this->_hitPoints += amount;
        std::cout << this->_name << " healed " << amount << " points" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " couldnt heal, no energy points left or hit points" << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
    return this->_attackDamage;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}