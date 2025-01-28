#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->atitue = new Brain();
    std::cout << "A Dog with a brain was created." << std::endl;
}

Dog::~Dog()
{
    delete this->atitue;
    std::cout << "Dog and his brain were destroyed." << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called, brain included." << std::endl;
}

Dog& Dog::operator=(Dog const &src) 
{
    std::cout << "Assignment operator for " << this->type << "and his brain called." << std::endl;
    Animal::operator=(src);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "WOOOOOF" << std::endl;
}