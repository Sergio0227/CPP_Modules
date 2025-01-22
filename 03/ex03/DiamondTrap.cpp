#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    ClapTrap::_name = "undefined_clap_name";
    DiamondTrap::_name = "undefined";
    this->_hitPoints = this->FragTrap::_hitPoints;
    this->_energyPoints = this->ScavTrap::_energyPoints;
    this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
    DiamondTrap::_name = name;
    this->_hitPoints = this->FragTrap::_hitPoints;
    this->_energyPoints = this->ScavTrap::_energyPoints;
    this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called, " << this->_name << " destroyed" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "DiamondTrap Copy constructor called, " << src._name << " Claptrap was copied" << std::endl;
    *this = src;
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap const &src)
{
    std::cout << "DiamondTrap Copy assignement operator called, " << src._name << " FragTrap was copied" << std::endl;
    ClapTrap::operator=(src);
    DiamondTrap::_name = src.DiamondTrap::_name;
    return (*this);
}

void DiamondTrap::attack(std::string const& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap, My name is " << _name << std::endl;
    std::cout << "My original ClapTrap name is" << ClapTrap::_name << std::endl;
}
