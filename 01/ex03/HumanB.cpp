#include "HumanB.hpp"


HumanB::HumanB(std::string t_name)
{
    if (!t_name.empty())
        this->name = t_name;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &ref_weapon)
{
    this->weapon = &ref_weapon;
}
