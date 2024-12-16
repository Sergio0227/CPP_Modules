#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>

class Fixed {
private:
    int nbr;
    static const int fractional_bits = 8;

public:
    Fixed(void);
    Fixed(Fixed const &src);
    ~Fixed(void);

    Fixed &	operator=( Fixed const & src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif
