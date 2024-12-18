#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int    main()
{
    Zombie *horde;
    Zombie test;
    int nb_zombies = 10;

    std::cout << "ZOMBIE HORDE" << std::endl;
    horde = zombieHorde(nb_zombies, "Fernando");
    for (int i = 0; i < nb_zombies; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}