#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point_nbr(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int tmp_nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_nbr = tmp_nbr;
}

Fixed::Fixed(float tmp_nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_nbr = tmp_nbr;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->fixed_point_nbr = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout <<  "getRawBits member function called." << std::endl;
    return ( this->fixed_point_nbr );
}

void	Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member funtion called." << std::endl;
    this->fixed_point_nbr = raw;
    return;
}