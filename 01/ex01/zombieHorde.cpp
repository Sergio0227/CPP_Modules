#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];

    char num = '0';
    for (int i = 0; i < N; ++i)
    {
        zombies[i].set_name(name + num);
        num++;
    }
    return zombies;
}