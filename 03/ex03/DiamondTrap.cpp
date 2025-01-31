#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->_name = "unknown";
    ClapTrap::_name = "unknows_clap_name";
    this->_hitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = ScavTrap::_maxEnergyPoints;
    this->_attackDamage = FragTrap::_maxAttackDamage;
    std::cout << "DiamondTrap " << this->_name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name)
{
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = ScavTrap::_maxEnergyPoints;
    this->_attackDamage = FragTrap::_maxAttackDamage;
    std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called, " << this->_name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
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
    std::cout << "I am a DiamondTrap, My name is " << _name;
    std::cout << ". My original ClapTrap name is " << ClapTrap::_name << std::endl;
}
