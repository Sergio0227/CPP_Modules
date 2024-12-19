#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    ClapTrap	clap;
    ScavTrap    scav("maria");

    scav.guardGate();
    clap.attack("maria");
    scav.ScavTrap::attack("Maria");
    scav.ClapTrap::attack("Maria");

    return  0;
}

