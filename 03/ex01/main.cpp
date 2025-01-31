#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
    {
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        ScavTrap a;
        ScavTrap b("Elon Musk");

        std::cout << "\033[34mTesting\033[0m" << std::endl;
        a.attack("CloneTrap");
        a.beRepaired(22);
        a.takeDamage(21);
        a.beRepaired(22);
        a.guardGate();
        a.guardGate();
        b.attack("Trump");
        b.takeDamage(101);
        b.takeDamage(15);
        b.attack("Obama");
        std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    }
    return  0;
}

