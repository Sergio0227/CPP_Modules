#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "Zombie";
}

Zombie::Zombie(std::string t_name)
{
    if (!t_name.empty() && t_name.find(" \t"))
        this->name = t_name;
    else
        throw std::invalid_argument("Field cannot be empty");
}

Zombie::~Zombie(void)
{
    std::cout << name << " is dead... again?" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
