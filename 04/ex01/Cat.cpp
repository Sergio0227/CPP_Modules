#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->atitue = new Brain();
    std::cout << "A cat with a brain was created." << std::endl;
}

Cat::~Cat()
{
    delete this->atitue;
    std::cout << "Cat and his brain were destroyed." << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor called, brain included." << std::endl;
}

Cat& Cat::operator=(Cat const &src)
{
    std::cout << "Assignment operator for " << this->type << "and his brain called." << std::endl;
    Animal::operator=(src);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "MIAU" << std::endl;
}