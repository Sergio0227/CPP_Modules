#include "Weapon.hpp"

Weapon::Weapon(std::string t_type)
{
    setType(t_type);
}


void Weapon::setType(std::string t_type)
{
    if (!t_type.empty())
        this->type = t_type;
    else
        throw std::invalid_argument("Type cannot be empty");
}

const std::string& Weapon::getType(void)
{
    return this->type;
}