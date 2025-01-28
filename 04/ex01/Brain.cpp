#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
        this->_ideas[i] = "Brilliant idea nbr: " + i;
    std::cout << "A brain with its ideas was implemented" << std::endl;
}

Brain::~Brain()
{
    std::cout << "The brain was destroyed" << std::endl;
}

Brain::Brain(Brain const &src)
{
    *this = src;
    std::cout << "The brain was created" << std::endl;
}

Brain& Brain::operator=(Brain const &src)
{
    for (int i = 0; i < 100; ++i)
        this->_ideas[i] = src._ideas[i];
    return (*this);
}
