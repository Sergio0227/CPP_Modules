#include "Contact.hpp"

#include <stdexcept>

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void Contact::set_first_name(std::string t_first_name)
{
    if (!t_first_name.empty() && t_first_name.find(' '))
        this->first_name = t_first_name;
    else
        throw std::invalid_argument("Field cannot be empty");
}

std::string Contact::get_first_name(void)
{
    return this->first_name;
}

void Contact::set_last_name(std::string t_last_name)
{
    if (!t_last_name.empty() && t_last_name.find(' '))
        this->last_name = t_last_name;
    else
        throw std::invalid_argument("Field cannot be empty");
}

std::string Contact::get_last_name(void)
{
    return this->last_name;
}

void Contact::set_nickname(std::string t_nickname)
{
    if (!t_nickname.empty() && t_nickname.find(' '))
        this->nickname = t_nickname;
    else
        throw std::invalid_argument("Field cannot be empty");
}

std::string Contact::get_nickname(void)
{
    return this->nickname;
}

void Contact::set_number(std::string t_number)
{
    if (t_number.length() >= 5 && t_number.find(' '))
    {
        for (int i = 0; i < t_number.length(); ++i)
        {

            if (i == 0 && (t_number[i] != '+' && !isdigit(t_number[i])))
                throw std::invalid_argument("First character must be '+' or a digit");
            else if (i > 0 && !isdigit(t_number[i]))
                throw std::invalid_argument("Only digits allowed after the first character");
        }
        this->number = t_number;
    }
    else
        throw std::invalid_argument("Length of number must be greater than 5");
}

std::string Contact::get_number(void)
{
    return this->number;
}

void Contact::set_secret(std::string t_secret)
{
    if (!t_secret.empty())
        this->secret = t_secret;
    else
        throw std::invalid_argument("Field cannot be empty");
}

std::string Contact::get_secret()
{
    return this->secret;
}


