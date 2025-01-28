#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(Cat const &src)
{
    std::cout << "Assignment operator for " << this->type << " called." << std::endl;
    Animal::operator=(src);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "MIAU" << std::endl;
}