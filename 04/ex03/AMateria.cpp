#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria const	&AMateria::operator=(AMateria const &copy)
{
    this->_type = copy._type;
    std::cout << "AMateria Assignment Operator called" << std::endl;
    return (*this);
}

std::string const	&AMateria::getType(void) const
{
    return (this->_type);
}