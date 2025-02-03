#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
    std::cout << "ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)
{
    *this = copy;
    std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter const	&ICharacter::operator=(ICharacter const &copy)
{
    (void)copy;
    std::cout << "ICharacter Assignment Operator Called" << std::endl;
    return (*this);
}