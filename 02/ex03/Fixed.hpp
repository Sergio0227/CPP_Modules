#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>

class Fixed {
private:
    int nbr;
    static const int fractional_bits = 8;

public:
    Fixed(void);
    Fixed(int nbr);
    Fixed(float nbr);
    Fixed(Fixed const &src);
    ~Fixed(void);

    Fixed &operator=(Fixed const &src); // Copy assignment operator overload

    //COMPARISON OPERATORS
    bool operator> (Fixed const &other) const;
    bool operator< (Fixed const &other) const;
    bool operator>=(Fixed const &other) const;
    bool operator<=(Fixed const &other) const;
    bool operator==(Fixed const &other) const;
    bool operator!=(Fixed const &other) const;

    //ARITHMETIC OPERATORS
    Fixed operator+(Fixed const &other) const;
    Fixed operator-(Fixed const &other) const;
    Fixed operator*(Fixed const &other) const;
    Fixed operator/(Fixed const &other) const;

    Fixed &operator++();       // Prefix increment
    Fixed operator++(int);     // Postfix increment
    Fixed &operator--();       // Prefix decrement
    Fixed operator--(int);     // Postfix increment

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt( void ) const;

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed const &min(Fixed const &a, Fixed const &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed);

#endif
