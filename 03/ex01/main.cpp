#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap	maria = ClapTrap("maria");
    ClapTrap	fernando("Fernando");
    ClapTrap	zes[3];

    fernando = maria;
    fernando.attack("a worm");
    fernando.attack("a worm");
    fernando.attack("a worm");
    fernando.attack("a worm");
    maria.attack("a worm");
    maria.attack("a worm");
    maria.attack("a worm");
    maria.attack("a worm");

    maria.takeDamage(9);
    maria.attack("a worm");
    maria.takeDamage(1);
    maria.takeDamage(1);   // Dead
    maria.attack("a worm"); // No more life
    maria.beRepaired(10);  // If have one more life, will not have enought energy
}

