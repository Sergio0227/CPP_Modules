#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    ClapTrap	clap;
    ScavTrap    scav("maria");
    FragTrap    frag("idiot");
    scav.guardGate();
    clap.attack("maria");
    scav.ScavTrap::attack("Maria");
    scav.ClapTrap::attack("Maria");

    ScavTrap scav2;
    scav2 = scav;
    std::cout << scav.getName() << std::endl;
    frag.highFivesGuys();
    DiamondTrap test("Idiot");
    test.whoAmI();
    return  0;
}

