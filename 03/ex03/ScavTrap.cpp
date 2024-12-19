#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap Constructor called, " << ClapTrap::getName() << " is a ScavTrap" << std::endl;
    this->_gateKeeper = false;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called, " << ClapTrap::getName() << " is a ScavTrap" << std::endl;
    this->_gateKeeper = false;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called, " << ClapTrap::getName() << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "ScavTrap Copy constructor called, " << src.getName() << " ScavTrap was copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << "ScavTrap Copy assignement operator called, " << src.getName() << " ScavTrap was copied" << std::endl;
    ClapTrap::operator=(src);
    this->_gateKeeper = src._gateKeeper;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() && this->getHitPoints())
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage()
                  << " points of damage!" << std::endl;
    else
        std::cout << "ClapTrap " << this->getName() << " couldnt attack, no energy points left or hit points" << std::endl;
}


void ScavTrap::guardGate()
{
    this->_gateKeeper = true;
    std::cout << "SlavTrap " << this->getName() << " is now a Gate Keeper" << std::endl;

}