#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    ClapTrap	clap;
    ClapTrap	clap2("Ze");
    ScavTrap    scav("maria");

    scav.guardGate();
    clap.attack("maria");
    scav.attack("Maria");
    scav.attack("Maria");

    return  0;
}

