#ifndef FIXES_HPP
#define FIXES_HPP


class Fixed
{
private:
    int fixed_point_nbr;
    static const int nbr_fractional_bits = 8;

public:
    Fixed();

    Fixed(Fixed const &ref);

    ~Fixed();
};


#endif //FIXES_HPP
