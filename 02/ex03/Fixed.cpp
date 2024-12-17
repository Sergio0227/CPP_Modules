#include "Fixed.hpp"

Fixed::Fixed(void) : nbr(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int nbr)
{
    //std::cout << "Int constructor called" << std::endl;
    this->nbr = nbr << this->fractional_bits;
}

Fixed::Fixed(float nbr)
{
    //std::cout << "Float constructor called" << std::endl;
    this->nbr  = (int)roundf(nbr * (1 << this->fractional_bits));
}

Fixed::Fixed(Fixed const &src)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & src)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->nbr = src.getRawBits();
    return (*this);
}

bool Fixed::operator> (Fixed const &other) const
{
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator< (Fixed const &other) const
{
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(Fixed const &other) const
{
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(Fixed const &other) const
{
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(Fixed const &other) const
{
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(Fixed const &other) const
{
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(Fixed const &other) const
{
    Fixed return_value;
    return_value.setRawBits(this->getRawBits() + other.getRawBits());
    return return_value;
}

Fixed Fixed::operator-(Fixed const &other) const
{
    Fixed return_value;
    return_value.setRawBits(this->getRawBits() - other.getRawBits());
    return return_value;
}

Fixed Fixed::operator*(Fixed const &other) const
{
    Fixed return_value;
    return_value.setRawBits((this->getRawBits() * other.getRawBits()) >> fractional_bits);
    return return_value;
}

Fixed Fixed::operator/(Fixed const &other) const
{
    Fixed return_value;
    return_value.setRawBits((this->getRawBits() << fractional_bits) / other.getRawBits());
    return return_value;
}

Fixed &Fixed::operator++()
{
    this->nbr++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed return_value = *this;
    this->nbr++;
    return return_value;
}

Fixed &Fixed::operator--()
{
    this->nbr--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed return_value = *this;
    this->nbr--;
    return return_value;
}

int Fixed::getRawBits(void) const
{
    //std::cout <<  "getRawBits member function called." << std::endl;
    return ( this->nbr );
}

void	Fixed::setRawBits( int const tmp_nbr )
{
    //std::cout << "setRawBits member funtion called." << std::endl;
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return b;
    return a;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return b;
    return a;
}