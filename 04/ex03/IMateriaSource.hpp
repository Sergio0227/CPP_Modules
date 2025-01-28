#pragma once

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP


class IMateriaSource {
private:

public:
    IMateriaSource();
    ~IMateriaSource();
    IMateriaSource(IMateriaSource const &src);
    IMateriaSource& operator=(IMateriaSource const &src);
};


#endif //IMATERIASOURCE_HPP