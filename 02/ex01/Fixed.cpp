#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed(void) : nbr(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int tmp_nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->nbr = tmp_nbr << this->fractional_bits;
}

Fixed::Fixed(float tmp_nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->nbr  = (int)roundf(tmp_nbr * (1 << this->fractional_bits));
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
        this->nbr = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout <<  "getRawBits member function called." << std::endl;
    return ( this->nbr );
}

void	Fixed::setRawBits( int const tmp_nbr )
{
    std::cout << "setRawBits member funtion called." << std::endl;
    this->nbr = tmp_nbr;
    return;
}

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return os;
}

float Fixed::toFloat(void) const
{
    return (float)this->nbr / (float)(1 << fractional_bits);

}

int Fixed::toInt( void ) const
{
    return (int)(this->nbr >> fractional_bits);
}