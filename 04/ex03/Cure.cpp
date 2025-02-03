#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor colled" << std::endl;
}

Cure::Cure(Cure const &copy): AMateria(copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure const	&Cure::operator=(const Cure &copy)
{
    this->_type = copy._type;
    return (*this);
}

AMateria	*Cure::clone(void) const
{
    return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}