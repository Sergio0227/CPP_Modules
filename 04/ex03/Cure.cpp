#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}
Cure::~Cure()
{
}
Cure::Cure(Cure const &src)
{
    this->type = src.type;
}
Cure& Cure::operator=(Cure const &src)
{
    this->type = src.type;
    return *this;
}
