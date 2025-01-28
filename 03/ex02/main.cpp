#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    ClapTrap	clap;
    ScavTrap    scav("maria");
    FragTrap    frag("idiot");
    scav.guardGate();
    scav.guardGate();
    clap.attack("maria");
    scav.attack("Maria");

    ScavTrap scav2;
    scav2 = scav;
    frag.highFivesGuys();
    frag.attack("Manel");
    return  0;
}

