#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


class Character: public ICharacter
{
private:
    std::string	_name;
    AMateria	*_inventory[4];
public:
    Character(void);
    Character(std::string const &name);
    Character(Character const &copy);
    ~Character(void);

    Character const	&operator=(Character const &copy);

    std::string const	&getName(void) const;
    void				setName(std::string const &name);

    virtual void	equip(AMateria *m);
    virtual void	unequip(int idx);
    virtual void	use(int idx, ICharacter &target);
    int 			inInventory(AMateria *m);
};

#endif //CHARACTER_HPP