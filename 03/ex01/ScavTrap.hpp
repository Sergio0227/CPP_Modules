#pragma once
#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include <string>

class ScavTrap {
private:

public:
    ScavTrap();
    ScavTrap(std::string const &name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(ScavTrap const &src);
};


#endif //CPP_SCAVTRAP_HPP
