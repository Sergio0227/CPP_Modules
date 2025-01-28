#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_name = "unknown";
    this->_hitPoints = _maxHitPoints;
    this->_energyPoints = _maxEnergyPoints;
    this->_attackDamage = _maxAttackDamage;
    std::cout << "ScavTrap Constructor called, " <<this->_name << " is a ScavTrap" << std::endl;
    this->_gateKeeper = false;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->_name = name;
    this->_hitPoints = _maxHitPoints;
    this->_energyPoints = _maxEnergyPoints;
    this->_attackDamage = _maxAttackDamage;
    std::cout << "ScavTrap Constructor called, " << this->_name << " is a ScavTrap" << std::endl;
    this->_gateKeeper = false;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called, " << this->_name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "ScavTrap Copy constructor called, " << src._name << " ScavTrap was copied" << std::endl;
    this->_gateKeeper = src._gateKeeper;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << "ScavTrap Copy assignement operator called, " << src._name << " ScavTrap was copied" << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    this->_gateKeeper = src._gateKeeper;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints && this->_hitPoints)
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
                  << " points of damage!" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " couldnt attack, no energy points left or hit points" << std::endl;
}


void ScavTrap::guardGate()
{
    this->_gateKeeper = true;
    std::cout << "SlavTrap " << this->_name << " is now a Gate Keeper" << std::endl;

}