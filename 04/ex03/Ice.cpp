#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}
Ice::~Ice()
{
}
Ice::Ice(Ice const &src)
{
    this->type = src.type;
}
Ice& Ice::operator=(Ice const &src)
{
    this->type = src.type;
    return *this;
}
