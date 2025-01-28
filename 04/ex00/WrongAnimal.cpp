#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << "Assignment operator for WrongAnimal " << this->type << " called." << std::endl;
    this->type = src.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "... unknown WrongAnimal sound ...\n";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
