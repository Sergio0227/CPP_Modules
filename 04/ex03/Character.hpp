#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


class Character {
private:

public:
    Character();
    ~Character();
    Character(Character const &src);
    Character& operator=(Character const &src);
};


#endif //CHARACTER_HPP