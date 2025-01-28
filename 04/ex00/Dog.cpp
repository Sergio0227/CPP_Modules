#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(Dog const &src) 
{
    std::cout << "Assignment operator for " << this->type << " called." << std::endl;
    Animal::operator=(src);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "WOOOOOF" << std::endl;
}