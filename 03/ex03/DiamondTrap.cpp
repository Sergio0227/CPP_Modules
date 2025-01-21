#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    ClapTrap::_name = "undefined_clap_name";
    DiamondTrap::_name = "undefined_clap_name";
}

DiamondTrap::DiamondTrap(std::string name)
{
    ClapTrap::_name = name + "_clap_name";
    DiamondTrap::_name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called, " << this->_name << " destroyed" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
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
