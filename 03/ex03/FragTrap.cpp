#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap("unknown", 100, 100, 30)
{
    std::cout << "FragTrap Constructor called, " << this->_name << " is a FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap Constructor called, " << this->_name << " is a FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called, " << this->_name << " destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "FragTrap Copy constructor called, " << src._name << " Claptrap was copied" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    std::cout << "FragTrap Copy assignement operator called, " << src._name << " FragTrap was copied" << std::endl;
    ClapTrap::operator=(src);
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
    if (this->_energyPoints <= 0)
        std::cout << "Cannot high five because FragTrap " << this->_name << " is dead." << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
}
