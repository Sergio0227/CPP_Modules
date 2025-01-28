#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = src;
}

Animal& Animal::operator=(Animal const &src)
{
    std::cout << "Assignment operator for Animal " << this->type << " called." << std::endl;
    this->type = src.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "... unknown animal sound ...\n";
}

std::string Animal::getType() const
{
    return (this->type);
}
