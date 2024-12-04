#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *p_zombie;

    p_zombie = new Zombie(name);
    return p_zombie;
}
