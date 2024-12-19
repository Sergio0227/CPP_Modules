#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor called, " << this->_name << " FragTrap created" << std::endl;
    this->_name = "unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name)
{
    std::cout << "FragTrap Constructor called, " << this->_name << " FragTrap created" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
}

FragTrap::FragTrap(FragTrap const &src)
{
}

FragTrap &FragTrap::operator=(FragTrap const &src)
        {
}
