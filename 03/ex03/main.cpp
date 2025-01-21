#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    /*ClapTrap	clap;
    ScavTrap    scav("maria");
    FragTrap    frag("idiot");

    ScavTrap scav2;
    scav2 = scav;
    std::cout << scav.getName() << std::endl;
    frag.highFivesGuys(); */
    DiamondTrap test("Idiot");
    DiamondTrap test2 = test;
    test.whoAmI();
    test2.whoAmI();
    return  0;
}

