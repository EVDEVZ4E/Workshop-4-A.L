#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Objet2D.h"

class Rectangle : public Objet2D{
    public: 
        Rectangle();
        Rectangle(int tdim1, int tdim2);
        int getLongueur();
        int getLargeur();
        int getPerimetre();
        int getAire();
        std::string afficheInfo();
};

#endif