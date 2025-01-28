#pragma once

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
    std::string type;

public:
    AMateria();
    ~AMateria();
    AMateria(AMateria const &src);
    AMateria& operator=(AMateria const &src);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //AMATERIA_HPP