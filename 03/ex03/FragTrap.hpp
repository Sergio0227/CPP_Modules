#pragma once
#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
private:

public:
    FragTrap();
    FragTrap(std::string const &name);
    virtual ~FragTrap();
    FragTrap(FragTrap const &src);
    FragTrap &operator=(FragTrap const &src);

    void highFivesGuys(void);
};


#endif //CPP_FRAGTRAP_HPP
