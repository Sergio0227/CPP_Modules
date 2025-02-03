#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
    std::cout << "IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &copy)
{
    *this = copy;
    std::cout << "IMateriaSource copy constructor called" << std::endl;
}

IMateriaSource const	&IMateriaSource::operator=(IMateriaSource const &copy)
{
    (void)copy;
    std::cout << "IMateriaSource Assignment Operator Called" << std::endl;
    return (*this);
}
