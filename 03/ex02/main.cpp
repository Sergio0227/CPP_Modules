#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
    {
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        FragTrap a;
        FragTrap b("Maria");

        std::cout << "\033[34mTesting\033[0m" << std::endl;
        a.highFivesGuys();
        a.attack("random dude");
        a.takeDamage(101);
        a.takeDamage(1);
        a.attack("some other dude");
        b.highFivesGuys();
        std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    }
    return  0;
}

