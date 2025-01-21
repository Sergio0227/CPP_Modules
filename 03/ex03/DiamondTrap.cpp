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
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap const &src)
{
}

void DiamondTrap::attack(std::string const& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap, My name is" << DiamondTrap::_name << std::endl;
    std::cout << "My original ClapTrap name is" << ClapTrap::_name << std::endl;
}
