#include "HumanA.hpp"


HumanA::HumanA(std::string t_name, Weapon &ref_weapon): name(t_name), weapon(ref_weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}