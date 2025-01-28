#pragma once

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


class MateriaSource {
private:

public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &src);
    MateriaSource& operator=(MateriaSource const &src);
};


#endif //MATERIASOURCE_HPP