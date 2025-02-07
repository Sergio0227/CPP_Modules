#pragma once

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
protected:
    ICharacter(void);
    ICharacter(ICharacter const &copy);

    ICharacter const	&operator=(ICharacter const &copy);
public:
    virtual	~ICharacter() {}

    virtual std::string const	&getName() const = 0;
    virtual void	equip(AMateria *m) = 0;
    virtual void	unequip(int idx) = 0;
    virtual void	use(int idx, ICharacter &target) = 0;
};
#endif //ICHARACTER_HPP