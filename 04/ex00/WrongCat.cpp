#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &src)
{
    std::cout << "Assignment operator for " << this->type << " called." << std::endl;
    WrongAnimal::operator=(src);
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Disabled MIAU... he has cancer or something" << std::endl;
}