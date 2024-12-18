#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>


class ScavTrap {
private:

public:
    ScavTrap(void);
    ScavTrap(std::string const &name);
    ~ScavTrap(void);
    ScavTrap(ScavTrap const &src);
    ScavTrap& operator=(ScavTrap const &src);
};


#endif //SCAVTRAP_HPP