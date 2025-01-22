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
    std::cout << test2.getName() << std::endl;
    std::cout << test2.getAttackDamage() << std::endl;
    std::cout << test2.getEnergyPoints() << std::endl;
    std::cout << test2.getHitPoints() << std::endl;

    return  0;
}

